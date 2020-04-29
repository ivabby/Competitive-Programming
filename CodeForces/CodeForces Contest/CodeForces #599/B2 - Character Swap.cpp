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
int k,n;
string s,t;
void solve()
{
    cin>>n>>s>>t;
    int c[26] = {0};
    for(int i=0;i<s.length();i++) c[s[i] - 'a']++;
    for(int i=0;i<t.length();i++) c[t[i] - 'a']++;
    
    for(int i=0;i<26;i++)
        if(c[i]&1)
        {
            cout<<"No\n";
            return;
        }
    
    vector<pair<int,int>> p;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == t[i]) continue;
        bool flag = false;
        for(int j=i+1;j<s.length();j++)
            if(t[i] == t[j])
            {
                p.pb(mp(i+1,j+1));
                swap(s[i] , t[j]);
                flag = true;
                break;
            }
        if(flag) continue;
        for(int j=i+1;j<s.length();j++)
            if(s[j] == t[i])
            {
                p.pb(mp(j+1,j+1));
                swap(s[j] , t[j]);
                p.pb(mp(i+1,j+1));
                swap(s[i] , t[j]);
                break;
            }
    }
    cout<<"Yes\n";
    cout<<p.size()<<"\n";
    for(auto i : p) cout<<i.first<<" "<<i.second<<"\n";
}
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
        solve();
    }
    return 0;
}
