
// 217. Contains Duplicate

// Given an array of integers, 
// find if the array contains any duplicates.

// Your function should return true if any value appears at least
// twice in the array, and it should return false if every element
// is distinct.

#include <vector>
#include <unordered_set>

/**
 * Space complexity: O(n)     
**/         
bool containsDuplicate(const std::vector<int>& nums) 
{
    if(nums.size() < 2) return false;

    std::unordered_set<int> s(nums.begin(), nums.end());

    return (s.size() != nums.size());
}

