class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0 , j = 0;
        int n1 = word1.length() , n2 = word2.length();
        
        string s = "";
        
        while(i<n1 || j<n2) {
            if(i == n1) {
                s += (char)(word2[j]);        
                j++;
            }
            else if(j == n2) {
                s += (char)(word1[i]);
                i++;
            }
            else {
                
                s = s + (char)(word1[i]);
                s = s + (char)(word2[j]);
                i++;
                j++;
            }
        }
        
        return s;
    }
};
