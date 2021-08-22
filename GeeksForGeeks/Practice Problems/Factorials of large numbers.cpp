class Solution {
public:
    vector<int> factorial(int N){
        vector<int> ans;
        ans.push_back(1);
        
        for(int i=2;i<=N;i++) {
            
            int cur = i;
            int carry = 0;
            for(int j=0;j<ans.size();j++) {
                int val = ans[j] * cur + carry;
                carry = val/10;
                val %= 10;
                ans[j] = val;
            }
            
            while(carry > 0) {
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        
        int i = 0 , j = ans.size() - 1;
        while(i < j) {
            swap(ans[i] , ans[j]);
            i++;
            j--;
        }
        
        return ans;
    }
};
