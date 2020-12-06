
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
#include <algorithm>

// The physical size of the container is unchanged.
// Iterators pointing to an element between the new logical end and
// the physical end of the range are still dereferenceable, but
// the elements themselves have unspecified values.
int removeDuplicates(std::vector<int>& nums)
{        
    return
    distance(nums.begin(), unique(nums.begin(), nums.end()));
}
