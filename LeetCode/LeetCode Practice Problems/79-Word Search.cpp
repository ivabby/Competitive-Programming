class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(word.length() == 0) return false;
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] == word[0] && dfs(board,word,0,i,j))
                    return true;
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>& grid, string& word, int index, int i, int j){
        if(index == word.length())
            return true;
        if(i < 0 || i>=grid.size() || j < 0 || j >=grid[0].size() || grid[i][j] != word[index])
            return false;
        
        char temp = grid[i][j];
        grid[i][j] = ' ';
        bool res = (dfs(grid,word,index+1,i+1,j) ||
                    dfs(grid,word,index+1,i-1,j) ||
                    dfs(grid,word,index+1,i,j+1) ||
                    dfs(grid,word,index+1,i,j-1) );
        
        grid[i][j] = temp;
        return res;
        }
};
