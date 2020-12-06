
// 26. Remove Duplicates from Sorted Array

// Given a sorted array nums, remove the duplicates in-place such
// that each element appears only once and returns the new lengt.

// Do not allocate extra space for another array, you must do this
// by modifying the input array in-place with O(1) extra memory.

/**
 * Time complexity: O(n)
 * Space complexity: O(1)
**/

#include <vector>

int removeDuplicates(std::vector<int>& nums)
{        
    if(nums.empty()) return 0;

    // The 1st element is initially unique.
    // Only unique elements are located to the left of the uniq-index
    int uniq{1};
    for(int i = 1; i < nums.size(); ++i)
    {
        if(nums[i] != nums[i-1])
            nums[uniq++] = nums[i];
    }
    nums.erase(nums.begin()+uniq, nums.end());

    return uniq;
}
