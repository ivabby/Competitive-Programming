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
const int N = (int)100 + 9;
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
    freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int unique = 0 , repeat = 0;
        int n,a;
        map<int,int> m;
        cin>>n;
        forr(0,n-1)
        {
            cin>>a;
            m[a]++;
            // if(m[a] == 1)   unique++;
            repeat = max(repeat , m[a]);
        }
 
        unique = m.size() - 1;
        // cout<<unique<<" "<<repeat<<"\n";
        if(unique > repeat)
            cout<<repeat<<"\n";
        else
        {
            int ans = min(unique+1 , repeat-1);
            ans = max(ans , min(unique , repeat));
            cout<<ans<<"\n";
        }
    }
    return 0;
}
