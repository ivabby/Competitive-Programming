class Solution{
    public:
    int countBitsFlip(int a, int b){
        int cnt = 0;
        while(a && b) {
            if((a&1) != (b&1)) {
                cnt++;
            }
            
            a = a>>1;
            b = b>>1;
        }
        
        while(a) {
            if((a&1) == 1)
                cnt++;
            a = a>>1;
        }
        
        while(b) {
            if((b&1) == 1)
                cnt++;
            b = b>>1;
        }
        return cnt;
    }
};
