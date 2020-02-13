class Solution {
public:
    int minAddToMakeValid(string S) {
        int ans = 0;
        int c1 = 0 , c2 = 0;
        for(char c : S)
        {
            if(c == '(')
                c1++;
            else{
                if(c1 > 0)
                {
                    c1--;
                }
                else{
                    ans++;
                }
            }
        }
        
        return ans + c1;
    }
};
