/**
  * Given an array, rotate the array to the right
  * by k steps, where k is non-negative.
  *
  * Constraints:
  *  1 <= nums.length <= 105
  *  -231 <= nums[i] <= 231 - 1
  *  0 <= k <= 105
**/

#include <iostream> 
#include <vector>
#include <algorithm>

// solution1
void rotate1(std::vector<int>& nums, int k)
{
    int size = nums.size();

    k %= size;
    if(k == 0) return;

    int pos = size - k;
    int tmp = nums[pos];
    int i = 0;
    int count = size;

    while(count-- > 0)
    {
        std::swap(tmp, nums[i]);
        i += k;
        if(i >= size) i -= size;

        if(i == pos)
        {
            nums[i] = tmp;
            if(--count > 0) // (pos < size - 1)
            {
                tmp = nums[++pos];
                i = pos + k - size;
            }
        }
    }
}    

// solution2
void reverse(std::vector<int>& arr, int l, int r)
{
    for(int i = l, j = r; i < j; ++i, --j)
        std::swap(arr[i], arr[j]);
}
    
void rotate2(std::vector<int>& nums, int k)
{
    int size = nums.size();
        
    k %= size;
    if(!k) return;
        
    reverse(nums, size - k, size - 1);
    reverse(nums, 0, size - k - 1);
    reverse(nums, 0, size - 1);
}

// solution3
void rotate3(std::vector<int>& nums, int k)
{
    k %= nums.size();
        
    std::reverse(nums.begin(), nums.end() - k);
    std::reverse(nums.end() - k , nums.end());
    std::reverse(nums.begin(), nums.end());
}

