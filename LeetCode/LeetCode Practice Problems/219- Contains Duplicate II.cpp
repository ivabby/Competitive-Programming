class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        int n = a.size();
        map<int , int> m;
        
        for(int i=0;i<n;i++)
        {
            if(m[a[i]] != 0)
            {
                int diff = (i+1) - m[a[i]];
                if(diff <= k)
                    return true;
            }
            m[a[i]] = i + 1;
        }
        return false;
    }
};
