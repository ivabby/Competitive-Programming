class Solution {
public:
    bool checkPowersOfThree(int n) {
                
        while(n>1) {
            while(n%3 == 0) {
                n/=3;
            }
            
            if(n == 2) return false;
            
            if(n>1) {
                n--;
            }
            
            if(n == 1 || n%3!=0) {
                break;
            }
            
        }
        
        cout<<n;
        
        return n==1;
    }
};
