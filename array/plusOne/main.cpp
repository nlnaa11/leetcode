
// test

#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits);

void print(const std::vector<int>& digits)
{
    for(int i = 0; i < digits.size(); ++i)
        std::cout << digits[i];

    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<int> digits{ 1, 2, 3 };
    std::cout << "before: ";
    print(digits);

    std::cout << "after: ";
    print(plusOne(digits));
    std::cout << std::endl;

    digits = { 4, 3, 2, 1 };
    std::cout << "before: ";
    print(digits);

    std::cout << "after: ";
    print(plusOne(digits));
    std::cout << std::endl;

    digits = { 0 };
    std::cout << "before: ";
    print(digits);

    std::cout << "after: ";
    print(plusOne(digits));
    std::cout << std::endl;

    digits = { 9 };
    std::cout << "before: ";
    print(digits);

    std::cout << "after: ";
    print(plusOne(digits));
    std::cout << std::endl;

    return 0;
}
