class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int pos = 0;
        for(char c : s)
        {
            if(c == 'L')
                pos--;
            else
                pos++;
            if(pos == 0)
                count++;
        }
        return count;
    }
};
