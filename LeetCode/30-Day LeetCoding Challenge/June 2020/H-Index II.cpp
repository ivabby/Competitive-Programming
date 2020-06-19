class Solution {
public:
    int hIndex(vector<int>& a) {
        int n = a.size();
        if(n == 0) return 0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i] >= n-i)
                return n-i;
        }
        
        return 0;
    }
};
