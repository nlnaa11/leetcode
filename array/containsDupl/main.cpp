
// test

#include <iostream>
#include <vector>

bool containsDuplicate1(std::vector<int>& nums);
bool containsDuplicate2(std::vector<int>& nums);

void print(std::vector<int>& nums)
{
    for(int i = 0; i < nums.size(); ++i)
        std::cout << nums[i] << ' ';

    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<int> nums{ 1, 2, 3, 1 };
    std::cout << "array:\t";
    print(nums);

    std::cout << "Does it contain duplicates? ";
    std::cout << (containsDuplicate1(nums) ? "yes" : "no");
    std::cout << std::endl;

    nums = { 1, 2, 3, 4 };
    std::cout << "array:\t";
    print(nums);

    std::cout << "Does it contain duplicates? ";
    std::cout << (containsDuplicate2(nums) ? "yes" : "no");
    std::cout << std::endl;

    nums = { 1,1,1,3,3,4,3,2,4,2 };
    std::cout << "array:\t";
    print(nums);

    std::cout << "Does it contain duplicates? ";
    std::cout << (containsDuplicate2(nums) ? "yes" : "no");
    std::cout << std::endl;

    return 0;
}
