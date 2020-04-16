class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        stack<int> a,b;
        
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
                a.push(i);
            else if(s[i] == '*')
                b.push(i);
            else
            {
                if(!a.empty())
                    a.pop();
                else if(!b.empty())
                    b.pop();
                else
                    return false;
            }
        }
        
        while(!a.empty() && !b.empty())
        {
            int v1 = a.top() , v2 = b.top();
            a.pop();
            b.pop();
            if(v1 > v2)
                return false;
        }
        
        if(!a.empty())
            return false;
        return true;
        
    }
};
