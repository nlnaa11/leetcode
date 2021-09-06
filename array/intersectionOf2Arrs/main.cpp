
// test

#include <iostream>
#include <vector>

std::vector<int> intersect1(std::vector<int>& nums1,
                            std::vector<int>& nums2);
std::vector<int> intersect2(std::vector<int>& nums1,
                            std::vector<int>& nums2);

void print(const std::vector<int>& nums)
{
    for(int i =  0; i < nums.size(); ++i)
        std::cout << nums[i] << ' ';

    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<int> nums1{ 1, 2, 2 };
    std::vector<int> nums2{ 1 };

    std::cout << "array1:\t";
    print(nums1);
    std::cout << "array2:\t";
    print(nums2);

    std::cout << "intersection: ";
    print(intersect1(nums1, nums2));

    nums1 = { 1, 2, 2 };
    nums2 = { 0 };

    std::cout << "array1:\t";
    print(nums1);
    std::cout << "array2:\t";
    print(nums2);

    std::cout << "intersection: ";
    print(intersect2(nums1, nums2));

    nums1 = { 4, 9, 5 };
    nums2 = { 9, 4, 9, 8, 4 };

    std::cout << "array1:\t";
    print(nums1);
    std::cout << "array2:\t";
    print(nums2);

    std::cout << "intersection: ";
    print(intersect1(nums1, nums2));

    return 0;
}
