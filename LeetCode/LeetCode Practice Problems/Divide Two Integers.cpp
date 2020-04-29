#define ll long long
class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign = ((dividend < 0) ^ (divisor < 0))?-1:1;
        ll dvd = dividend;
        ll dvs = divisor;
        
        if(dividend == INT32_MIN && divisor == -1)
            return INT32_MAX;
        
        ll res = 0;
        dvd = abs(dvd);
        dvs = abs(dvs);
        for(int i=31;i>=0;i--)
        {
            if(dvd >= (dvs<<i))
            {
                dvd-=(dvs<<i);
                res+=(1<<i);
            }
        }
        return sign*res;
    }
};
