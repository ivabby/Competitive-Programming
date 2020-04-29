class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s; 
        map<int,string> m;
        int j = 0;
        bool flag = true;
        for(int i=0;i<s.length();i++)
        {
            if(flag)
            {
                m[j]+=s[i];
                j++;
            }
            else
            {
                m[j]+=s[i];
                j--;
            }
            if(j == numRows)
            {
                flag = false;
                j=numRows - 2;
            }
            if(j == -1)
            {
                flag = true;
                j = 1;
            }
        }
        string a = "";
        for(auto i : m)
        {
            a+=i.second;
        }
        return a;
    }
};
