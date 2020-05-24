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
    
    ll ans = 0;
    ll n,k,a,b;
    cin>>n>>k>>a>>b;

    if(k == 1)
    {
        cout<<(n-1)*a;
        return 0;
    }

    while(n > 1)
    {
        ans += (n%k)*a;
        n -= n%k;
        if(n == 0)
            ans -= a;
        ll ne = n/k;
        if((n - ne)*a > b)
            ans += b;
        else
            ans += (n-ne)*a;
        n/=k;
    }

    cout<<ans;

    
    return 0;
}
