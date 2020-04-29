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
int t,n;
string ans;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
    while(t--){
        cin>>n;
        ans = "";
        bool ok = true;
        vector<pair<int,int>> a(n);
        forr(0,n-1){
            cin>>a[i].first>>a[i].second;
        }
        sort(a.begin() , a.end());

        pair<int,int> cur = mp(0,0);
        forr(0,n-1){
            int r = a[i].first - cur.first;
            int u = a[i].second - cur.second;
            if(r<0 || u<0)
            {
                ok = false;
                cout<<"NO\n";
                break;
            }
            ans+=string(r,'R');
            ans+=string(u,'U');
            cur = a[i];
        }

        if(ok)
            cout<<"YES\n"<<ans<<"\n";
    }	
    return 0;
}
