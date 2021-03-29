class Solution {
public:
    vector<int> closestDivisors(int num) {
        num++;
        vector<int> a = {1 , num};
        for(int i=2;i*i<=num;i++) {
            if(num%i == 0) {
                int j = num/i;
                if(abs(j-i) < abs(a[0] - a[1])) {
                    a[0] = i;
                    a[1] = j;
                }
            }
        }
        
        num++;
        for(int i=2;i*i<=num;i++) {
            if(num%i == 0) {
                int j = num/i;
                if(abs(j-i) < abs(a[0] - a[1])) {
                    a[0] = i;
                    a[1] = j;
                }
            }
        }
        
        return a;
    }
};
