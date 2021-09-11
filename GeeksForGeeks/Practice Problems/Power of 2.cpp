class Solution{
    public:
    bool isPowerofTwo(long long n){
        
        // Your code here    
        if(n == 0) return false;
        if(n == 1) return true;
        
        while(true) {
            if((n & 1)) {
                n >>= 1;
                break;
            }
            n >>= 1;
        }
        
        return (n == 0);
    }
};
