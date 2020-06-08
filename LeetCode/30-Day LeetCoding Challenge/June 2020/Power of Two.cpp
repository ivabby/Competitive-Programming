class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0 ) return false;
        int p = (int)log2(n);
        if(pow(2,p) == n)
            return true;
        
        return false;
    }
};
