/**
  * Given an m x n integer matrix matrix,
  * if an element is 0, set its entire row
  * and column to 0's, and return the matrix.
  *
  * You must do it in place.
  *
  * Constraints:
  *  m == matrix.length
  *  n == matrix[0].length
  *  1 <= m, n <= 200
  *  -231 <= matrix[i][j] <= 231 - 1
**/

#include <vector>

void setZeroes(std::vector<std::vector<int>>& matrix)
{
    std::vector<short> col;
    col.resize(matrix[0].size(), 1);
       
    int r_finish{}, r_start{};
              
    auto fillRow = [&col](std::vector<int>& r_matrix, int c_curr)
                   {
                       int c = 0;
                       while(c < c_curr)
                       {
                           r_matrix[c++] = 0;
                       }
                           
                       // skip c_curr
                       while(++c < r_matrix.size())
                       {
                           if(!r_matrix[c]) 
                               col[c] = 0;
                           else
                               r_matrix[c] = 0;
                       }
                   };
      
    for(int r = 0; r < matrix.size(); ++r)
    {
        for(int c = 0; c < matrix[0].size(); ++c)
        {
            if(matrix[r][c] != 0)
            {
                if(col[c] == 0)
                    matrix[r][c] = 0;
            }
            else // matrix[r][c] == 0
            {
                if(col[c] != 0)
                {
                    col[c] = 0;
                    r_finish = r;
                    fillRow(matrix[r], c); // c == c_curr
                }
                else // col[c] == 0
                {
                    r_finish = r;
                    fillRow(matrix[r], c);
                }
                    
                if(!r)
                    ++r_start;
                else if(r_start - r == 0)
                    ++r_start;
                    
                break;
            }
        }
    }
        
    for(int r = r_start; r < r_finish; ++r)
    {
        for(int c = 0; c < matrix[0].size(); ++c)
        {
            if(col[c] == 0)
                matrix[r][c] = 0;
        }
    } 
}
