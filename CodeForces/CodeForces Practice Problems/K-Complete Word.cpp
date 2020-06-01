#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
const int N = (int)2e5 + 9;
ll power(ll x,ll y)
{
    if(y == 0)
        return 1;
    ll temp = power(x,y/2);
    if(y%2 == 1)
        return temp*temp*x;
    else    
        return temp*temp;
}
int cnt[N][26];

int differ(int u,int v)
{
    int s = 0 , mx = 0;
    for(int i=0;i<26;i++)
    {
        s += cnt[u][i] + cnt[v][i];
        mx = max(mx , cnt[u][i] + cnt[v][i]);
    }

    return s-mx;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;

        for(int i=0;i<k;i++)
            for(int j=0;j<26;j++)
                cnt[i][j] = 0;

        for(int i=0;i<n;i++)
            cnt[i%k][s[i] - 'a']++;

        int ans = 0;
        for(int i=0;i<k;i++)
            ans += differ(i,k-1-i);

        
        cout<<ans/2<<"\n";
    }
    
    return 0;
}
