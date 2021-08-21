class Solution{
    public:
    bool subArrayExists(int a[], int n)
    {
        map<int,int> m;
        int s = 0;
        for(int i=0;i<n;i++) {
            s += a[i];
            if(s == 0 || m.find(s) != m.end()) return true;
            m[s] = i;
        }
        
        return false;
    }
};
