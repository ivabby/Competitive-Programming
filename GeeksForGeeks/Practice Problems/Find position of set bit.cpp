class Solution {
  public:
    int findPosition(int N) {
        int pos = 0;
        
        if(N == 0) return -1;
        
        while(N) {
            pos++;
            if(N&1) {
                N>>=1;
                break;
            }
            N>>=1;
        }
        
        return (N == 0)?pos:-1;
    }
};
