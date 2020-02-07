class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> a;
        for(auto i : A)
        {
            if(i&1)
                a.push_back(i);
            else
                a.insert(a.begin(),i);
        }
        
        return a;
    }
};
