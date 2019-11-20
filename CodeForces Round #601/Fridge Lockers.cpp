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
int t,n,m,a;
vector<pair<int,int>> p;
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("in.txt" , "r" , stdin);
    // // freopen("out.txt" , "w" , stdout);
    // #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll s = 0;
        p.clear();
        forr(1,n)
        {
            cin>>a;
            s+=a;
            p.pb(mp(a,i));
        }
        sort(all(p));
        if(m<n || n == 2)
            cout<<"-1\n";
        else
        {
            s*=2;
            m-=n;
            cout<<s + m*(p[0].first + p[1].first)<<"\n";
            forr(0,m-1)
                cout<<p[0].second<<" "<<p[1].second<<"\n";
            forr(1,n)
            {
                int sc = (i+1)%(n+1);
                sc = (sc == 0)?1:sc;
                cout<<i%(n+1)<<" "<<sc<<"\n";
            }
        }
    }
    return 0;
}
