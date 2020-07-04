class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> s;
        s.insert(1);
        
        while(n--)
        {
            if(n == 0)
                return *s.begin();
            long long v = *s.begin();
            s.erase(v);
            
            s.insert(v*2);
            s.insert(v*3);
            s.insert(v*5);
        }
        return 0;
    }
};
