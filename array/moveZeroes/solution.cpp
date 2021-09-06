/**
  * Given an integer array nums, move all 0's
  * to the end of it while maintaining 
  * the relative order of the non-zero elements.
  *
  * Note that you must do this in-place 
  * without making a copy of the array.
  *
  * Constraints:
  *  1 <= nums.length <= 104
  *  -231 <= nums[i] <= 231 - 1
**/

#include <vector>
#include <algorithm>

// solution1
void moveZeroes1(std::vector<int>& nums)
{
    auto found = nums.begin();
    auto end = nums.end();
        
    while(1)
    {
        found = std::find(found, end, 0);
            
        if(found != end)
        {
            nums.erase(found);
            nums.emplace_back(0);
            --end;
        }
        else return;
    }
}

// solution2
void moveZeroes2(std::vector<int>& nums)
{
    int pos{0};
       
    for(int i = 0 ; i < nums.size(); ++i)
        if(nums[i] != 0)
            nums[pos++] = nums[i];
        
    while(pos < nums.size())
        nums[pos++] = 0;
}
