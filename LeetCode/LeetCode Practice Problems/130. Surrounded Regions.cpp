class Solution {
public:
    int n,m;
    vector<vector<char>> a;
    map<pair<int,int> , int> vis;    
    void check(int i,int j){
        if(i<0 || j<0 || i>=n || j>=m) return;
        if(a[i][j] == 'X' || vis[make_pair(i,j)] == 1) return;
        
        vis[make_pair(i,j)] = 1;
        check(i+1,j);
        check(i-1,j);
        check(i,j+1);
        check(i,j-1);
    }
    void solve(vector<vector<char>>& board) {
        if(board.size() == 0) return;
        a = board;
        n = board.size();
        m = board[0].size();
        
        //  Check for 1st row
        for(int j=0;j<m;j++)
            if(a[0][j] == 'O')
                check(0,j);
        
        //  Check for 1st column
        for(int i=0;i<n;i++)
            if(a[i][0] == 'O')
                check(i,0);
        
        //  Check for last row
        for(int j=0;j<m;j++)
            if(a[n-1][j] == 'O')
                check(n-1,j);
        
        //  Check for last column
        for(int i=0;i<n;i++)
            if(a[i][m-1] == 'O')
                check(i,m-1);
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j] == 'O' && vis[make_pair(i,j)] != 1)
                {
                    board[i][j] = 'X';
                }
    }
};
