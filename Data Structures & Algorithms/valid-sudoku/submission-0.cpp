class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        map<int,map<char,bool>> column_map;
        map<int,map<char,bool>> row_map;
        map<pair<int,int>,map<char,bool>> inner_matrix;

        for (int i=0; i < 9; i++)
            {
                for (int j=0; j<9; j++)
                    {
                        if (board[i][j] == '.')
                            continue;
                        
                        if (column_map.find(j) != column_map.end())
                            {
                                if (column_map[j].find(board[i][j]) != column_map[j].end())
                                    return false;
                                else
                                    column_map[j][board[i][j]] = true;
                            }
                        else
                            {
                                column_map[j][board[i][j]] = true;
                            }

                        if (row_map.find(i) != row_map.end())
                            {
                                if (row_map[i].find(board[i][j]) != row_map[i].end())
                                    return false;
                                else
                                    row_map[i][board[i][j]] = true;
                            }
                        else
                            {
                                row_map[i][board[i][j]] = true;
                            }

                        int inner_row = i/3;
                        int inner_col = j/3;
                        
                        if (inner_matrix.find({inner_row,inner_col}) != inner_matrix.end())
                            {
                                if (inner_matrix[{inner_row,inner_col}].find(board[i][j]) != inner_matrix[{inner_row,inner_col}].end())
                                    return false;
                                else
                                    inner_matrix[{inner_row,inner_col}][board[i][j]] = true;
                            }
                        else
                            {
                                inner_matrix[{inner_row,inner_col}][board[i][j]] = true;
                            }
                    }

            }

            return true;

        
    }
};
