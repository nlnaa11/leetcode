/**
  * Given an integer array nums, return all
  * the triplets [nums[i], nums[j], nums[k]]
  * such that i != j, i != k, and j != k,
  * and nums[i] + nums[j] + nums[k] == 0.
  *
  * Notice that the solution set must not
  * contain duplicate triplets
  *
  * Constraints:
  *  0 <= nums.length <= 3000
  *  -105 <= nums[i] <= 105
**/

#include <vector>
#include <algorithm>

// solution1
std::vector<std::vector<int>> threeSum1(std::vector<int>& v)
{
    std::vector<std::vector<int>> triplets;
        
    if(v.size() < 3)
        return triplets;

    std::sort(v.begin(), v.end());
        
    for(auto i = v.begin(); i < v.end() - 2; )
    {
        for(auto j = i + 1; j < v.end() - 1; )
        {
            auto found{
                std::binary_search(j + 1, v.end(), -(*i + *j)) };
                
            if(found)
                triplets.emplace_back(
                    std::vector<int>{*i, *j, -(*i + *j)});
                
            j = std::find_if(j + 1, v.end() - 1,
                            [&j](auto value){ return value > *j; });
        }
            
        i = std::find_if(i + 1, v.end() - 2,
                         [&i](auto value){ return value > *i; });
    }
        
    return triplets;
}


// solution2
std::vector<std::vector<int>> threeSum2(std::vector<int>& nums)
{
    std::vector<std::vector<int>> triplets;
        
    std::sort(nums.begin(), nums.end());
        
    int last_front;
    for(auto it = nums.begin(); it != nums.end(); ++it)
    {
        if(it != nums.begin() && *it == last_front)
            continue;

        last_front = *it;
        auto front = it + 1;
        auto back = nums.end() - 1;

        while(front < back)
        {
            if(last_front + *front + *back == 0)
            {
                if(triplets.size() == 0 ||
                   triplets.back()[0] != last_front ||
                   triplets.back()[1] != *front ||
                   triplets.back()[2] != *back)
                { 
                   triplets.push_back({*it, *front, *back});
                }

                ++front;
                --back;
            }

            else if(last_front + *front + *back < 0)
                ++front;
            else // greater than 0
                --back;
        }
    }
        
    return triplets;
}


// solution3
void twoSum(std::vector<int>& nums, int pivot,
            std::vector<std::vector<int>>& answer); 

std::vector<std::vector<int>> threeSum3(std::vector<int>& nums)
{
    std::vector<std::vector<int>> triplets;
        
    if(nums.size() >= 3)
    {
        sort(begin(nums), end(nums));
            
        for(int pivot = 0; pivot < nums.size(); ++pivot)
        {
            if(nums[pivot] > 0)
                break;

            if(pivot == 0 || nums[pivot - 1] != nums[pivot])
                twoSum(nums, pivot, triplets);
        }
    }
    return triplets;
}
    
void twoSum(std::vector<int>& nums, int pivot,
            std::vector<std::vector<int>>& answer) 
{
    int left = pivot + 1, right = nums.size() - 1;
    int target = -nums[pivot];
        
    while(left < right)
    {
        int complement = target - nums[left];

        if(complement > nums[right])
            ++left;

        else if(complement < nums[right])
            --right;

        else
        {
            answer.push_back( {nums[pivot],
                               nums[left],
                               nums[right]} );
            ++left; --right;

            while(left < right &&
                  nums[left - 1] == nums[left])
                ++left;
        }
    }
}
