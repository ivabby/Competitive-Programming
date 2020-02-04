class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        bool flag = true;
        int ans = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '6' && flag)
            {
                ans = ans*10 + 9;
                flag = false;
            } else {
                ans = ans*10 + (s[i] - '0');
            }
        }
        return ans;
    }
};
