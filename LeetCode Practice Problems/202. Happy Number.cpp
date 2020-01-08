class Solution {
public:
    bool isHappy(int n) {
        set<int> ss;
        while(true)
        {
            int s = 0;
            while(n>0)
            {
                int v = n%10;
                s+= v*v;
                n/=10;
            }
            n = s;
            if(n == 1) return true;
            if(ss.find(n) != ss.end()) return false;
            ss.insert(n);
        }
        if(n == 1) return true;
        return false;
    }
};
