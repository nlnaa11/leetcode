
// test

#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums);

int main()
{
    std::vector<int> nums{10};

    nums = {1, 1, 2};
    std::cout << "2: " << removeDuplicates(nums) << '\n';
    std::cout << "1 2: ";
    for(const auto& element : nums)
        std::cout << element << " ";

    nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    std::cout << "\n5: " << removeDuplicates(nums) << '\n';
    std::cout << "0 1 2 3 4: ";
    for(const auto& element : nums)
        std::cout << element << " ";

    nums = {};
    std::cout << "\n0: " << removeDuplicates(nums) << '\n';
    std::cout << " : ";
    for(const auto& element : nums)
        std::cout << element << " ";

    nums = {0, 1, 1, 2, 2, 3, 1, 0};
    std::cout << "\n6: " << removeDuplicates(nums) << '\n';
    std::cout << "0 1 2 3 1 0: ";
    for(const auto& element : nums)
        std::cout << element << " ";


} 



