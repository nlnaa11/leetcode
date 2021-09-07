
// test

#include <iostream>
#include <vector>

void setZeroes(std::vector<std::vector<int>>& matrix);

void print(const std::vector<std::vector<int>>& m)
{
    for(int i = 0; i < m.size(); ++i)
    {
        for(int j = 0; j < m[0].size(); ++j)
        {
            std::cout << m[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<std::vector<int>> matrix =
        { {1, 1, 1}, {1, 0, 1}, {1, 1, 1} };

    std::cout << "before:\n";
    print(matrix);

    setZeroes(matrix);
    std::cout << "after:\n";
    print(matrix);

    matrix = { {0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5} };

    std::cout << "before:\n";
    print(matrix);

    setZeroes(matrix);
    std::cout << "after:\n";
    print(matrix);

    return 0;
}
