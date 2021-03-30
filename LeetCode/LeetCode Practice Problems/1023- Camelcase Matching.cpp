class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        int n = queries.size();
        vector<bool> a(n,false);
        
        for(int i=0;i<n;i++) {
            bool f = true;
            
            int j = 0 , k = 0;
            int l1 = queries[i].length() , l2 = pattern.length();
            
            while(j<l1 || k<l2) {
                if(j == l1) {
                    f = false;
                }
                else if(k == l2) {
                    if(queries[i][j]>='A' && queries[i][j]<='Z') f = false;
                    j++;
                }
                else if(queries[i][j] >='A' && queries[i][j]<='Z'){
                    if(queries[i][j] != pattern[k]) f = false;
                    j++;
                    k++;
                } else {
                    if(queries[i][j] == pattern[k]) j++,k++;
                    else j++;
                }
                
                if(!f) break;
            }
            
            a[i] =f;
        }
        
        return a;
    }
};
