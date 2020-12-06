
// test

#include <iostream>
#include <vector>

bool containsDuplicate(const std::vector<int>& nums); 

int main()
{
    std::vector<int> nums(10);
    nums = {1, 2, 3, 1};
    std::cout << "true: ";
    std::cout << std::boolalpha << containsDuplicate(nums);

    nums = {1, 2, 3, 4};
    std::cout << "\nfalse: ";
    std::cout << std::boolalpha << containsDuplicate(nums);

    nums = {};
    std::cout << "\nfalse: ";
    std::cout << std::boolalpha << containsDuplicate(nums);

    nums = {1, 2};
    std::cout << "\nfalse: ";
    std::cout << std::boolalpha << containsDuplicate(nums);

    nums = {1, 1, 1, 3, 3, 4};
    std::cout << "\ntrue: ";
    std::cout << std::boolalpha << containsDuplicate(nums);
}
