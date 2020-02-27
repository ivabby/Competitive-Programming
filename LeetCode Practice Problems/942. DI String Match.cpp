class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n = S.length();
        int x = 0 , y = n;
        vector<int> a;
        
        for(int i=0;i<n;i++)
        {
            if(S[i] == 'I')
            {
                a.push_back(x);
                x++;
            }
            else
            {
                a.push_back(y);
                y--;
            }
        }    
        a.push_back(x);
        
        return a;
    }
};
