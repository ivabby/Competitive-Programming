class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& a) {
        int odd = 1;
        int n = a.size();
        
        while(a[odd]&1 == 1 && odd+2<n) {
            odd+=2;
        }
        
        int even = 0;
        while(even<n) {
            if(a[even]&1 == 1) {
                swap(a[even] , a[odd]);
                while(a[odd]&1 == 1 && odd+2<n) {
                    odd+=2;
                }
            } 
            even+=2;
        }
        
        return a;
    }
};
