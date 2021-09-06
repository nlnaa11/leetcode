
// test

#include <iostream>
#include <vector>

std::vector<std::vector<int>> threeSum1(std::vector<int>& nums);
std::vector<std::vector<int>> threeSum2(std::vector<int>& nums);
std::vector<std::vector<int>> threeSum3(std::vector<int>& nums);

void print(const std::vector<int>& nums)
{
    for(int i = 0; i < nums.size(); ++i)
        std::cout << nums[i] << ' ';
    std::cout << std::endl;
}

void print2(const std::vector<std::vector<int>>& nums)
{
    std::cout << "| ";

    for(int i = 0; i < nums.size(); ++i)
    {
        for(int j = 0; j < nums[0].size(); ++j)
            std::cout << nums[i][j] << ' ';

        std::cout << "| ";
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<int> nums{ -1, 0, 1, 2, -1, -4 };
    
    std::cout << "array:\t\t";
    print(nums);

    std::cout << "triplets:\t";
    print2(threeSum1(nums));    
    std::cout << std::endl;

    nums = { 1 };
    
    std::cout << "array:\t\t";
    print(nums);

    std::cout << "triplets:\t";
    print2(threeSum2(nums));    
    std::cout << std::endl;

    nums = { 0 };
    
    std::cout << "array:\t\t";
    print(nums);

    std::cout << "triplets:\t";
    print2(threeSum3(nums));    
    std::cout << std::endl;

    return 0;
}
