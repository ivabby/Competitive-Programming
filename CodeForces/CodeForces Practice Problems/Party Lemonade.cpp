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
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    

    int n,k;
    cin>>n>>k;
    vector<ll> a(n+1);
    
    ll two = 1;

    forr(1,n)
    {
        cin>>a[i];

        if(i != 1)
        {
            a[i] = min(a[i] , a[i-1]*2);
        }
        two *= 2;
    }

    ll ans = LONG_LONG_MAX;

    ll s = 0;
    for(int i=n;i>=1;i--)
    {
        ll need = k/(1 << (i-1));
        s += need * a[i];
        k -= need<<(i-1);
        ans = min(ans , (k > 0)*a[i] + s);
    }

    cout<<ans;


    return 0;
}
