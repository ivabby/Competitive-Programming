class Solution {
public:
    int numTeams(vector<int>& a) {
        int ans = 0 , n = a.size();
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                for(int k=j+1;k<n;k++)
                    if((a[i]<a[j] && a[j]<a[k]) || (a[i]>a[j] && a[j]>a[k]))
                        ans++;
        
        return ans;
    }
};
