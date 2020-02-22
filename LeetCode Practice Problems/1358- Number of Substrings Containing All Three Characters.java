class Solution {
public:
    int numberOfSubstrings(string s) {
        queue<int> a,b,c;
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'a')
                a.push(i);
            else if(s[i] == 'b')
                b.push(i);
            else
                c.push(i);
        }
        
        int ans = 0, i =0;
        while(!a.empty() && !b.empty() && !c.empty())
        {
            char ch = s[i];
            int v = 0;
            if(ch == 'a')
            {
                v = max(b.front() , c.front());
                a.pop();
            }
            else if(ch == 'b')
            {
                v = max(a.front() , c.front());
                b.pop();
            }
            else{
                v = max(a.front() , b.front());
                c.pop();
            }
            
            ans = ans + (n - v);
            i++;
        }
        
        return ans;
    }
};
