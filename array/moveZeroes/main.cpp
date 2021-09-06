
// test

#include <iostream>
#include <vector>

void moveZeroes1(std::vector<int>& nums);
void moveZeroes2(std::vector<int>& nums);

void print(const std::vector<int>& nums)
{
    for(int i = 0; i < nums.size(); ++i)
        std::cout << nums[i] << ' ';

    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<int> nums{ 0, 1, 3, 0, 1, 12 };
    std::cout << "before:\t";
    print(nums);

    moveZeroes1(nums);
    std::cout << "after:\t";
    print(nums);

    nums = { 0 };
    std::cout << "before:\t";
    print(nums);

    moveZeroes2(nums);
    std::cout << "after:\t";
    print(nums);

    nums = { 0, 1, 0, 2, 0 };
    std::cout << "before:\t";
    print(nums);

    moveZeroes2(nums);
    std::cout << "after:\t";
    print(nums);

    return 0;
}
