
// test

#include <iostream>
#include <vector>

std::vector<int> twoSum1(std::vector<int>& nums, int target);
std::vector<int> twoSum2(std::vector<int>& nums, int target);

void print(const std::vector<int>& nums)
{
    for(int i = 0; i < nums.size(); ++i)
        std::cout << nums[i] << ' ';

    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<int> nums{ 2, 7, 11, 15 };

    std::cout << "array:\t";
    print(nums);
    std::cout << "target: " << 9 << '\n';

    std::cout << "indices:";
    print(twoSum1(nums, 9));
    std::cout << std::endl;

    nums = { 3, 2, 4 };

    std::cout << "array:\t";
    print(nums);
    std::cout << "target: " << 6 << '\n';

    std::cout << "indices:";
    print(twoSum2(nums, 6));
    std::cout << std::endl;

    nums = { 3, 3 };

    std::cout << "array:\t";
    print(nums);
    std::cout << "target: " << 6 << '\n';

    std::cout << "indices:";
    print(twoSum1(nums, 6));
    std::cout << std::endl;

    return 0;
}
