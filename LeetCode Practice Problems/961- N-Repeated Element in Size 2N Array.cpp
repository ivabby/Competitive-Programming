class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        set<int> s;
        for(auto i : A)
        {
            if(s.find(i) != s.end())
                return i;
            s.insert(i);
        }
        
        return A[0];
    }
};
