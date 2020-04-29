class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int maxi = -1;
        int n = a.size();
        for(int i=n-1;i>=0;i--)
        {
            int v = a[i];
            a[i] = maxi;
            maxi = max(v,maxi);
        }
        return a;
    }
};
