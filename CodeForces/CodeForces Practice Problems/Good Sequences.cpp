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
    if(y == 0)
        return 1;
    ll temp = power(x,y/2);
    if(y%2 == 1)
        return temp*temp*x;
    else    
        return temp*temp;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n;
    cin>>n;
    int a[n],dp[N];
    memset(dp , 0 , sizeof dp);
    forr(0,n-1){
        cin>>a[i];
    }

    int ans = 1;
    vector<int> v;
    forr(0,n-1)
    {
        int tmp = a[i];
        int val = 0;

        for(int j=2;j*j<=tmp;j++)
            if(tmp%j == 0)
            {
                v.pb(j);
                val = max(val , dp[j] + 1);
                while(tmp%j == 0)
                    tmp /= j;
            }

        if(tmp > 1)
        {
            v.pb(tmp);
            val = max(val , dp[tmp] + 1);
        }

        for(int j=0;j<v.size();j++) dp[v[j]] = val;
        v.clear();

        ans = max(ans , val);
    }

    cout<<ans<<"\n";

    
    return 0;
}
