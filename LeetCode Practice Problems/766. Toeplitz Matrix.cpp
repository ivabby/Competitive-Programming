class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& a) {
        
        int n = a.size();
        int m = a[0].size();
        
        for(int i=n-1;i>=0;i--)
        {
            int c = 0;
            int r = i;
            int v = a[r][c];
            while(r<n && c<m)
            {
                if(v != a[r][c])
                {
                    return false;       
                }
                r++;
                c++;
            }
        }
        
        for(int i=1;i<m;i++)
        {
            int r = 0;
            int c = i;
            int v = a[r][c];
            while(r<n && c<m)
            {
               if(v != a[r][c])
                {
                    return false;       
                }
                r++;
                c++; 
            }
        }
        
        return true;
    }
};
