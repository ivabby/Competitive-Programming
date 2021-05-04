class Solution {
public:
    
    bool check(int a) {
        while(a) {
            if(a%10 == 0) {
                return false;
            }
            a /= 10;
        }
        
        return true;
    }
    
    vector<int> getNoZeroIntegers(int n) {
        int a = 1 , b = n-1;
        while(true) {
            if(check(a) && check(b)) 
                break;
            a++;
            b--;
        }
        
        return {a,b};
    }
};
