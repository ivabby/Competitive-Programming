class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(n != 1)
        {
            int m = n;
            if(s.find(m) != s.end()) return false;
            s.insert(m);
            int s = 0;
            while(m){
                s = s + (m%10)*(m%10);
                m/=10;
            }
            n = s;
        }            
        return true;
    }
};
