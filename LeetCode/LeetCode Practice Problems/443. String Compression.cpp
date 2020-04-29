class Solution {
public:
    int compress(vector<char>& a) {
        int i = 0 , j = 0;
        int n = a.size();
        
        while(i<n)
        {
            char ch = a[i];
            int c = 1;
            while(i+1<n && a[i] == a[i+1])
            {
                i++;
                c++;
            }
            if(c == 1)
            {
                a[j] = ch;
                j++;
            }
            else{
                string s = to_string(c);
                a[j++] = ch;
                for(int k=0;k<s.length();k++)
                {
                    a[j++] = s[k]; 
                }
            }
            i++;
        }
        
        return j;
    }
};
