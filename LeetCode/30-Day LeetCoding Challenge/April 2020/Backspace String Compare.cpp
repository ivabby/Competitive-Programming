class Solution {
public:
    bool backspaceCompare(string S, string T) {
        for(int i=0;i<S.length();)
        {
            if(S[i] == '#')
            {
                S = S.substr(0,max(0,i-1)) + S.substr(i+1);
                i = 0;
            }
            else{
                i++;
            }
        }
        
        for(int i=0;i<T.length();)
        {
            if(T[i] == '#')
            {
                T = T.substr(0,max(0,i-1)) + T.substr(i+1);
                i = 0;
            }
            else{
                i++;
            }
        }
        if(S == T)
            return true;
        return false;   
    }
};
