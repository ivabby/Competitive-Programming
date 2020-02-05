#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;

    vector<int> maxdp(26);
    vector<int> dp(n,1);

    for(int i=0;i<n;i++)
    {
        for(int c=25;c > s[i] - 'a';c--)
            dp[i] = max(dp[i] , maxdp[c] + 1);
        
        maxdp[s[i] - 'a'] = max(dp[i] , maxdp[s[i] - 'a']);
    }

    cout<<*max_element(maxdp.begin() , maxdp.end())<<"\n";
    for(auto i : dp) cout<<i<<" ";
    
    return 0;
}
