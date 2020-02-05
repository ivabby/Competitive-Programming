class Solution {
public:
    string removeOuterParentheses(string S) {
        string s = "" , ans = "";
        int c = 0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i] == '(')
            {
                c++;
                if(c>1)
                    ans = ans + "(";
            }
            else
            {
                c--;
                if(c>0)
                    ans = ans + ")";
            }
            
            if(c == 0)
            {
                s = s + ans;
                ans = "";
            }
        }
        
        return s;
    }
};
