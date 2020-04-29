class Solution {
public:
    string getPermutation(int n, int k) {
        string ans = "";
        vector<int> a;
        k--;
        int f[n];
        f[0] = 1;
        for(int i=0;i<n;i++)
        {
            a.push_back(i+1);
            if(i>0)
                f[i] = i * f[i-1];
        }

        for(int i=n-1;i>=0;i--)
        {
            int index = k/f[i];
            k-=(index * f[i]);
            cout<<index<<" ";
            ans+=to_string(a[index]);
            a.erase(a.begin() + index);
        }
        
        return ans;
    }
};
