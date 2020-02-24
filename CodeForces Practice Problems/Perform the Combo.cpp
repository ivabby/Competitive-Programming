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
const int N = (int)1e5 + 9;
ll power(ll x,ll y)
{
    ll ans = 1;
    while(y>0)
    {
        if(y%2 == 1)
            ans = ans*x;
        x=x*x;
        y=y>>1;
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> p(m);
        string s;
        cin>>s;
        forr(0,m-1)
        {   
            cin>>p[i];
            p[i]--;
        }
        vector<vector<int>> a(n , vector<int> (26 , 0));
        for(int i=0;i<n;i++)
        {
            if(i != 0)
            {
                for(int j=0;j<26;j++)
                    a[i][j] = a[i-1][j];
            }
            a[i][s[i] - 'a']++;
        }

        vector<int> cnt(26 , 0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<26;j++)
                cnt[j] = cnt[j] + a[p[i]][j];
        }
        for(int i=0;i<26;i++)
            cout<<cnt[i]+a[n-1][i]<<" ";
        cout<<"\n";
    }
    return 0;
}
