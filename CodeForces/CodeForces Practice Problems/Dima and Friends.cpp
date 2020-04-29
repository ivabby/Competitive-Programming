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
ll a,s = 0;
int n;
void solve()
{
    s%=n;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>n;
    forr(1,n)
    {
        cin>>a;
        s+=a;
    }
    s--;
    n++;
    solve();
    ll c = 0;
    forr(1,5)
    {
        s++;
        solve();
        if(s != 0)
            c++;
        // s = b;
    }
    cout<<c;
    
    return 0;
}
