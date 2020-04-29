#include<bits/stdc++.h>
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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    vector<int> a(d+10 , 0);
    for(int i=1;i*k<=d;i++)
        a[i*k] = 1;

    for(int i=1;i*l<=d;i++)
        a[i*l] = 1;

    for(int i=1;i*m<=d;i++)
        a[i*m] = 1;

    for(int i=1;i*n<=d;i++)
        a[i*n] = 1;

    ll ans = 0;
    for(int i=1;i<=d;i++)
        ans+=a[i];
    
    cout<<ans;
    return 0;
}
