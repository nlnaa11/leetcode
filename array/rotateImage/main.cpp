
// test

#include <vector>
#include <iostream>

void rotate(std::vector<std::vector<int>>& matrix);

void print(const std::vector<std::vector<int>>& m)
{
    for(int i = 0; i < m.size(); ++i)
    {
        for(int j = 0; j < m[0].size(); ++j)
            std::cout << m[i][j] << ' ';
        
        std::cout << '\n';
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::vector<std::vector<int>> matrix =
        { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    
    std::cout << "before:\n";
    print(matrix);

    rotate(matrix);
    std::cout << "after:\n";
    print(matrix);
    std::cout << std::endl;

    matrix =
        { {5, 1, 9, 11}, {2, 4, 8, 10},
          {13, 3, 6, 7}, {15, 14, 16, 12} };
    
    std::cout << "before:\n";
    print(matrix);

    rotate(matrix);
    std::cout << "after:\n";
    print(matrix);
    std::cout << std::endl;

    matrix = { {1, 2}, {3, 4} };
    
    std::cout << "before:\n";
    print(matrix);

    rotate(matrix);
    std::cout << "after:\n";
    print(matrix);

    return 0;
}
