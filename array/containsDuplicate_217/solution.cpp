
// 217. Contains Duplicate

// Given an array of integers, 
// find if the array contains any duplicates.

// Your function should return true if any value appears at least
// twice in the array, and it should return false if every element
// is distinct.

#include <vector>
#include <algorithm>

bool containsDuplicate(const std::vector<int>& nums) 
{
/**
 * Time complexity: O(n*n)        
 * Space complexity: O(1)
**/
//  if(nums.size() < 2) return false;
//  for(int uniq = 0; uniq < nums.size() - 1; ++uniq)
//  {
//      for(int i = uniq + 1; i < nums.size(); ++i)
//          if(nums[uniq] == nums[i]) return true;
//  }
//  return false;
        

/**
 * Time complexity: O(nlogn).
 * ( Sorting is O(nlogn) and the sweeping is O(n) )
 * Space complexity: O(n)     
**/         
    if(nums.size() < 2) return false;
        
    // std::vector<int> tmp{nums};
    int* tmp = new int[nums.size()];
    for(int i = 0; i < nums.size(); ++i)
        tmp[i] = nums[i];
        
    // std::sort(tmp.begin(), tmp.end());
    std::sort(tmp, tmp + nums.size());
     
    for(int i = 0; i < nums.size() - 1; ++i)
        if(tmp[i] == tmp[i+1])
        {
            delete[] tmp;
            return true;
        }   
        
    delete[] tmp;
    return false;
}
