/**
  * Given two integer arrays nums1 and nums2,
  * return an array of their intersection.
  * Each element in the result must appear as many times
  * as it shows in both arrays and you may return
  * the result in any order.
  *
  * Constraints:
  *  1 <= nums1.length, nums2.length <= 1000
  *  0 <= nums1[i], nums2[i] <= 1000
**/

#include <vector>
#include <algorithm>

// solution1
std::vector<int> intersect1(std::vector<int>& nums1,
                            std::vector<int>& nums2)
{          
    std::vector<int> arr;
        
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());

    int i{0}, j{0};
        
    while(i < nums1.size() && j < nums2.size())
    {
        if(nums1[i] == nums2[j])
        {
            arr.emplace_back(nums1[i]);
            ++i; ++j;
        }
        else if(nums1[i] > nums2[j])
            ++j;
        else // nums1[i] < nums2[j]
        ++i;
    }
       
    return arr;
}

// solution2
std::vector<int> cut(const std::vector<int>& _arr,
                     std::vector<int> arr_);

std::vector<int> intersect2(std::vector<int>& nums1,
                            std::vector<int>& nums2)
{                  
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());
        
    if(nums1.size() > nums2.size())
        return cut(nums2, nums1);
    else        
        return cut(nums1, nums2);
}
    
std::vector<int> cut(const std::vector<int>& _arr,
                     std::vector<int> arr_)
{
    std::vector<int> v;
    v.reserve(_arr.size());
        
    for(const auto& num : _arr)
    {
        auto found(std::find(arr_.begin(), arr_.end(), num));
          
        if(found != arr_.end())    
        {
            arr_.erase(found);
            v.emplace_back(num);
        }    
    }
        
    return v;
}
