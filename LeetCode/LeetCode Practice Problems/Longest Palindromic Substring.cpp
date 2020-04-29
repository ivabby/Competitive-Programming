class Solution {
public:
    string longestPalindrome(string s) {
        string a = ""; 
        int start = 0 , maxLength = 1 , n = s.length();
        bool dp[1010][1010] = {false};
        
        //  All string of length 1 is palindrome
        for(int i=0;i<n;i++)
            dp[i][i] = true;
        
        //  Considering string of length 2 and checking for palindrome
        for(int i=0;i<n-1;i++)
            if(s[i] == s[i+1])
            {
                start = i;
                maxLength = 2;
                dp[i][i+1] = true;
            }
        
        //  Now checking for length greater than 3
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j = i+k-1;
                if(dp[i+1][j-1] && s[i] == s[j])
                {
                    dp[i][j] = true;
                    if(k>maxLength)
                    {
                        start = i;
                        maxLength = k;
                    }
                }
            }
        }
        
        //  Now appending the characters to string
        for(int i=start;i<start+maxLength;i++)
            a+=s[i];
        
        return a;
    }
};
