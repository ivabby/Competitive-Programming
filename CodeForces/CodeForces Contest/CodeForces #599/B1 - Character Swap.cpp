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
int n,k;
string s,t;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>k;
    while(k--)
    {
        ll diff = 0;
        vector<pair<char,char>> p;
        cin>>n>>s>>t;
        forr(0,n-1)
        {
            if(s[i] != t[i])
            {
                p.pb(mp(s[i] , t[i]));
                diff++;
            }
            if(diff == 3) break;
        }
        if(diff == 0)
            cout<<"Yes\n";
        else if(diff == 2)
        {
            // cout<<p[0].first<<" "<<p[0].second<<" "<<p[1].first<<" "<<p[1].second<<"\n";
            if(p[0].first == p[1].first && p[0].second == p[1].second)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
            cout<<"No\n";
    }
    return 0;
}
