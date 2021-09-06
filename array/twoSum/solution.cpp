/**
  * Given an array of integers nums and
  * an integer target, return indices
  * of the two numbers such that
  * they add up to target.
  *
  * You may assume that each input would have
  * exactly one solution, and you may not use
  * the same element twice.
  *
  * You can return the answer in any order.
  *
  * Constraints:
  *  2 <= nums.length <= 104
  *  -109 <= nums[i] <= 109
  *  -109 <= target <= 109
  *  Only one valid answer exists.
**/

#include <vector>
#include <unordered_map>

// solution1
std::vector<int> twoSum1(std::vector<int>& nums, int target)
{
    for(int l = 0; l < nums.size() - 1; ++l)
    {
        for(int r = l + 1; r < nums.size(); ++r)
        {
            if(nums[l] + nums[r] == target)
                return {l, r};
        }
    }
    return {};
}

// solution2
std::vector<int> twoSum2(std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> map;

    for(int i = 0; i < nums.size(); ++i)
    {
        if(map.find(target - nums[i]) != map.end())
            return { map[target - nums[i]], i };

        map[nums[i]] = i; 
    }
    return {};
}

