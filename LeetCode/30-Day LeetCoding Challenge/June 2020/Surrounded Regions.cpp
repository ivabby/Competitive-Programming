class Solution {
public:
    vector<vector<char>> a;
    int n,m;
    map<pair<int,int> , int> mm;
    
    void check(int x,int y)
    {
        if(x < 0 || y < 0 || x == n || y == m || a[x][y] == 'X' || mm[make_pair(x,y)] == 1)
            return;
        
        mm[make_pair(x,y)] = 1;
        check(x,y+1);
        check(x,y-1);
        check(x+1,y);
        check(x-1,y);
    }
    
    void solve(vector<vector<char>>& board) {
        a = board;
        n = a.size();
        if(n == 0) return;
        m = a[0].size();
        
        //  Check the first row 
        for(int i=0;i<m;i++)
            if(a[0][i] == 'O' && mm[make_pair(0,i)] != 1)
                check(0 , i);
        
        //  Check the first column
        for(int i=0;i<n;i++)
            if(a[i][0] == 'O' && mm[make_pair(i,0)] != 1)
                check(i,0);
        
        //  Check the last row
        for(int i=0;i<m;i++)
            if(a[n-1][i] == 'O' && mm[make_pair(n-1,i)] != 1)
                check(n-1 , i);
        
        //  Check the last column
        for(int i=0;i<n;i++)
            if(a[i][m-1] == 'O' && mm[make_pair(i,m-1)] != 1)
                check(i,m-1);
        
        //  If character is 'O' and mm[x][y] != 1 then change it to 'X'
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(a[i][j] == 'O' && mm[make_pair(i,j)] != 1)
                    board[i][j] = 'X';
            }
                
    }
};
