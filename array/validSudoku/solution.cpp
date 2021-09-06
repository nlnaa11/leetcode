/**
  * Determine if a 9 x 9 Sudoku board is valid.
  * Only the filled cells need to be validated
  * according to the following rules:
  *
  * Each row must contain the digits 1-9
  * without repetition.
  * Each column must contain the digits 1-9
  * without repetition.
  * Each of the nine 3 x 3 sub-boxes of the grid
  * must contain the digits 1-9 without repetition.
  *
  * Note:
  * A Sudoku board (partially filled) could be
  * valid but is not necessarily solvable.
  * Only the filled cells need to be validated
  * according to the mentioned rules.
  *
  * Constraints:
  *  board.length == 9
  *  board[i].length == 9
  *  board[i][j] is a digit 1-9 or '.'.
**/

#include <vector>
#include <set>

// solution1
bool isValid(std::vector<std::vector<char>>& arr,
             int row, int col);
bool isValidRow(std::vector<std::vector<char>>& arr, int row);
bool isValidCol(std::vector<std::vector<char>>& arr, int col);
bool isValidBox(std::vector<std::vector<char>>& arr, 
                int rStart, int cStart);

bool isValidSudoku1(std::vector<std::vector<char>>& arr)
{
    for(int r = 0; r < arr.size(); ++r)
    {
        for(int c = 0; c < arr[0].size(); ++c)
        {
            if(!isValid(arr, r, c))
                return false;
        }
    }
    return true;
} // isValidSudoku

bool isValid(std::vector<std::vector<char>>& arr,
             int row, int col)
{
    return isValidRow(arr, row) && isValidCol(arr, col) &&
            isValidBox(arr, row - row % 3, col - col % 3);
} // isValid

bool isValidRow(std::vector<std::vector<char>>& arr, int row)
{
    std::set<char> set;

    for(int col = 0; col < arr[0].size(); ++col)
    {
        if(set.find(arr[row][col]) != set.end())
            return false;

        if(arr[row][col] != '.')
            set.insert(arr[row][col]);
    }
    return true;
} // isValidRow

bool isValidCol(std::vector<std::vector<char>>& arr, int col)
{
    std::set<char> set;

    for(int row = 0; row < arr.size(); ++row)
    {
        if(set.find(arr[row][col]) != set.end())
            return false;

        if(arr[row][col] != '.')
            set.insert(arr[row][col]);
    }
    return true;
} // isValidCol

bool isValidBox(std::vector<std::vector<char>>& arr,
                int rStart, int cStart)
{
    std::set<char> set;

    for(int row = 0; row < 3; ++row)
    {
        for(int col = 0; col < 3; ++col)
        {
            char sym{ arr[row + rStart][col + cStart] };

            if(set.find(sym) != set.end())
                return false;

            if(sym != '.')
                set.insert(sym);
        }
    }
    return true;
} // isValisBox


// solution2
bool isValidSudoku2(std::vector<std::vector<char>>& board)   
{
    int row[9] = {0};
    int col[9] = {0};
    int box[9] = {0};

    for(int r = 0; r < 9; ++r)
    {
        for(int c = 0; c < 9; ++c)
        {
            if(board[r][c] == '.')
                continue;

            int val = board[r][c] - '0';
            int pos = 1 << (val - 1);

            //check row
            if(row[r] & pos) return false;
            row[r] |= pos;
                
            //check col
            if(col[c] & pos) return false;
            col[c] |= pos;
                
            // check box
            int idx = 3 * (r / 3) + c / 3;

            if(box[idx] & pos) return false;
            box[idx] |= pos;
        }
    }
    return true;
}


// solution3
bool isValidSudoku3(std::vector<std::vector<char>>& board)
{
    std::vector<short> col(9, 0);
    std::vector<short> block(9, 0);
    std::vector<short> row(9, 0);
        
    for (int i = 0; i < 9; ++i)
    {    
        for (int j = 0; j < 9; ++j)
        {
            if (board[i][j] != '.')
            {
                int idx = 1 << (board[i][j] - '0');
                    
                if (row[i] & idx ||
                    col[j] & idx ||
                    block[i / 3 * 3 + j / 3] & idx)
                    return false;
                    
                row[i] |= idx;
                col[j] |= idx;
                block[i / 3 * 3 + j / 3] |= idx;
            }
        }
    }   
    return true;
}
