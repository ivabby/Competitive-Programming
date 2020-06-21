class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        for (int i = 1; i <= n; i++)
            s += to_string(i);
        int curPerm = 1;
        while (curPerm < k) {
            curPerm++;
            next_permutation(s.begin(), s.end());
        }
        return s;
    }
};
