class Solution {
public:
    static int bits(int n)
    {
        int c = 0;
        while(n > 0)
        {
            c+=(n&1);
            n=n>>1;
        }
        return c;
    }
    
    static bool comp(int i,int j)
    {
        int c1 = bits(i);
        int c2 = bits(j);
        if(c1 < c2)
            return 1;
        if(c1 == c2)
        {
            if(i < j)
                return 1;
            return 0;
        }
        else
            return 0;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin() , arr.end() , comp);
        
        return arr;
    }
};
