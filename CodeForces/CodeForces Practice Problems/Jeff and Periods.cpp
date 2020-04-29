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
const int N = (int)2e5 + 9;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

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
int n;
map<int,vector<int>> m;
void solve(){
    vector<pair<int,int>> p;
    for(auto i : m)
    {
        if(i.second.size() == 1)
            p.pb(mp(i.first , 0));
        else{
            vector<int> a = i.second;
            int d = a[1] - a[0];
            for(int i=2;i<a.size();i++)
                if(d != a[i] - a[i-1])
                    d = -1;
            
            if(d != -1)
                p.pb(mp(i.first , d));
        }
    }

    cout<<p.size()<<"\n";
    for(auto i : p)
        cout<<i.first<<" "<<i.second<<"\n";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    IOS;
    cin>>n;
    forr(1,n)
    {
        int a;
        cin>>a;
        m[a].pb(i);
    }

    solve();
    return 0;
}
