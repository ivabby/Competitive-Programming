vector<string> find(int n,int open,int close,string s,vector<string> a)
{
    if(open == n)
    {
        string b = "";
        while(close < open)
        {
            b+=")";
            close++;
        }
        s+=b;
        a.push_back(s);
        return a;
    }
    vector<string> b,c;
    if(open < n)
        a = find(n,open+1,close,s+"(",a);
    if(close < open)
        a = find(n,open,close+1,s+")",a);
    return a;
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if(n == 0) return {""};
        return find(n,1,0,"(",{});
    }
};
