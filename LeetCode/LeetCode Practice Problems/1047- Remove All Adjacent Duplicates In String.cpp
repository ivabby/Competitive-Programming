class Solution {
public:
    string removeDuplicates(string S) {
        for(int i=0;i<S.length();) {
            if(i+1<S.length() && S[i] == S[i+1]) {
                S = S.substr(0,i) + S.substr(i+2);
                i=0;
            } else {
                i++;
            }
        }
        
        return S;
    }
};
