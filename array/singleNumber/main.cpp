
// test

#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums);

void print(std::vector<int>& nums)
{
    for(int i = 0; i < nums.size(); ++i)
        std::cout << nums[i] << ' ';

    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<int> nums{ 2, 2, 1 };
    std::cout << "array:\t";
    print(nums);
    
    std::cout << "a single element: ";
    std::cout << singleNumber(nums);
    std::cout << std::endl;

    nums = { 1 };
    std::cout << "array:\t";
    print(nums);
    
    std::cout << "a single element: ";
    std::cout << singleNumber(nums);
    std::cout << std::endl;

    nums = { 4, 1, 2, 2, 1 };
    std::cout << "array:\t";
    print(nums);
    
    std::cout << "a single element: ";
    std::cout << singleNumber(nums);
    std::cout << std::endl;


    return 0;
}
