/**
  * You are given an n x n 2D matrix
  * representing an image, rotate the image
  * by 90 degrees (clockwise).
  *
  * You have to rotate the image in-place,
  * which means you have to modify the input
  * 2D matrix directly. DO NOT allocate another
  * 2D matrix and do the rotation.
  *
  * Constraints:
  *  matrix.length == n
  *  matrix[i].length == n
  *  1 <= n <= 20
  *  -1000 <= matrix[i][j] <= 1000
**/

#include <vector>
#include <algorithm>

void rotate(std::vector<std::vector<int>>& matrix)
{
    int size = matrix.size();
        
    // transpose
    for(int i = 0; i < size; ++i)
        for(int j = i + 1; j < size; ++j)
            std::swap(matrix[i][j], matrix[j][i]);
        
    // reflect
    for(int i = 0; i < size; ++i)
        for(int j = 0; j < size / 2; ++j)
            std::swap(matrix[i][j], matrix[i][size - 1 - j]);
}
    
// диагональ: верхний правый, нижний левый
/*
void rotate(std::vector<std::vector<int>>& matrix)
{
    int size = matrix.size();
        
    for(int i = 0; i < size; ++i)
        for(int j = 0; j < size - i; ++j)
            std::swap(matrix[i][j], 
                      matrix[size - 1 - j][size - 1 - i]);
}
*/

