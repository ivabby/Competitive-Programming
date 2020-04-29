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
    int n,a,b,k;
    cin>>n>>a>>b>>k;
    vector<int> h(n);
    forr(0,n-1)
    {
        cin>>h[i];
        h[i] = h[i]%(a+b);
        if(h[i] == 0) h[i] = a+b;
        h[i] = (h[i] - 1)/a;
    }

    sort(all(h));
    int ans = 0;
    for(int i=0;i<n;i++){
        if(k-h[i] < 0) break;
        ans++;
        k-=h[i];
    }

    cout<<ans;
    
    return 0;
}
