vector<string> find(char n)
{
    if(n == '2')
        return {"a","b","c"};
    else if(n == '3')
        return {"d","e","f"};
    else if(n == '4')
        return {"g","h","i"};
    else if(n == '5')
        return {"j","k","l"};
    else if(n == '6')
        return {"m","n","o"};
    else if(n == '7')
        return {"p","q","r","s"};
    else if(n == '8')
        return {"t","u","v"};
    else
        return {"w","x","y","z"};
}

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0)
            return {};
        vector<string> a = find(digits[0]);
        for(int i=1;i<digits.length();i++)
        {
            vector<string> b = find(digits[i]);
            vector<string> c;
            for(auto x : a)
                for(auto y : b)
                    c.push_back(x+y);
            a.clear();
            a = c;
        }
        return a;
    }
};
