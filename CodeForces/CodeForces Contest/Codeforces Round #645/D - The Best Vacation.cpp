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
int t = 1;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    cin>>t;
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    

    ll n,len;
    cin>>n>>len;
    vector<ll> a(n*2);
    
    forr(0,n-1)
    {
        cin>>a[i];
        a[n+i] = a[i];
    }
    n *= 2;

    vector<ll> B = {0},C = {0};
    forr(0,n-1)
        B.pb(B.back() + a[i]);

    forr(0,n-1)
        C.pb(C.back() + (a[i] * (a[i] + 1))/2);

    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        if(B[i+1] >= len)
        {
            ll z = upper_bound(B.begin(),B.end() , B[i+1] - len) - B.begin();
            ll cnt = C[i+1] - C[z];
            ll days = B[i+1] - B[z];
            ll too = len - days;
            cnt += 1LL*((a[z-1] * (a[z-1] +1))/2);
            cnt -= 1LL*(((a[z-1] - too) * (a[z-1] - too + 1))/2);
            ans = max(ans , cnt);
        }
    }
    cout<<ans<<"\n";
    

    
    return 0;
}
