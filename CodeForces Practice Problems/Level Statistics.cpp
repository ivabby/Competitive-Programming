#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define MAX 1000000007LL
#define mod 998244353LL
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
const int N = (int)100 + 9;

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
        ll p1 = 0 , p2 = 0;
        ll n;
        bool f = true;
        cin>>n;
        while(n--)
        {
            ll x,y;
            cin>>x>>y;
            if(p1>x || p2 >y || y-p2 > x-p1)
                f = false;
            p1 = x , p2 = y;
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
