class Solution {
public:
    set<char> s;
    bool check(char ch)
    {
        if(s.find(ch) == s.end())
        {
            s.insert(ch);
            return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> row(9) , column(9);
        //  Check for row
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                if(board[i][j] == '.')
                    continue;
                if(row[i].find(board[i][j]) != row[i].end())
                    return false;
                row[i].insert(board[i][j]);
            }
        
        //  Check for column
        for(int j=0;j<9;j++)
            for(int i=0;i<9;i++)
            {
                if(board[i][j] == '.')
                    continue;
                if(column[j].find(board[i][j]) != column[j].end())
                    return false;
                column[j].insert(board[i][j]);
            }
        
        //  Check for box
        for(int i=0;i<9;i+=3)
            for(int j=0;j<9;j+=3)
            {
                s.clear();
                if(board[i][j] != '.')
                    s.insert(board[i][j]);
                if(board[i][j+1] != '.' && check(board[i][j+1]))
                   return false;
                if(board[i][j+2] != '.' && check(board[i][j+2]))
                   return false;
                if(board[i+1][j] != '.' && check(board[i+1][j]))
                   return false;
                if(board[i+1][j+1] != '.' && check(board[i+1][j+1]))
                   return false;
                if(board[i+1][j+2] != '.' && check(board[i+1][j+2]))
                   return false;
                if(board[i+2][j] != '.' && check(board[i+2][j]))
                   return false;
                if(board[i+2][j+1] != '.' && check(board[i+2][j+1]))
                   return false;
                if(board[i+2][j+2] != '.' && check(board[i+2][j+2]))
                   return false;
            }
        
        return true;
    }
};
