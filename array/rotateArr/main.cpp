
// test

#include <iostream>
#include <vector>

void rotate1(std::vector<int>& nums, int k);
void rotate2(std::vector<int>& nums, int k);
void rotate3(std::vector<int>& nums, int k);

void print(std::vector<int>& nums)
{
    for(int i = 0; i < nums.size(); ++i)
        std::cout << nums[i] << ' ';

    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<int> nums{ 1, 2, 3, 4, 5, 6, 7 };
    std::cout << "before:       \t";
    print(nums);

    rotate1(nums, 3);
    std::cout << "after (k = 3):\t";
    print(nums);

    nums = { -1, -100, 3, 99 };
    std::cout << "before:       \t";
    print(nums);

    rotate2(nums, 2);
    std::cout << "after (k = 2):\t";
    print(nums);

    nums = { -2, -1, 0, 1, 2 };
    std::cout << "before:       \t";
    print(nums);

    rotate2(nums, 7);
    std::cout << "after (k = 7):\t";
    print(nums);

    return 0;
}
