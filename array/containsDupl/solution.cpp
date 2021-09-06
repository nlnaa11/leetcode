/**
  * Given an integer array nums, return true
  * if any value appears at least twice in the array,
  * and return false if every element is distinct.
  *
  * Constraints:
  *  1 <= nums.length <= 105
  *  -109 <= nums[i] <= 109
**/

#include <algorithm>
#include <vector>

// solution1
bool containsDuplicate1(std::vector<int>& nums)
{
    std::vector<int> v{ nums };
    std::sort(v.begin(), v.end());
        
    return nums.size() !=
        std::distance(v.begin(), std::unique(v.begin(), v.end()));
}

// solution2   
bool containsDuplicate2(std::vector<int>& nums)
{
    std::sort(nums.begin(), nums.end());
        
    for(int i = 0; i < nums.size() - 1; ++i)
        if(nums[i] == nums[i + 1])
            return true;
        
    return false;
}
