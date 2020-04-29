class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
            return 0;
        size_t f = haystack.find(needle);
        if(f != string::npos)
            return f;
        return -1;
    }
};
