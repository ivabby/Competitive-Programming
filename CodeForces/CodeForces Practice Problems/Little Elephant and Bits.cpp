#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
#include<string>
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


void solve(){
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i] == '0')
        {
            cout<<s.substr(0,i) + s.substr(i+1);
            return;
        }
    }
    cout<<s.substr(0,n-1);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    IOS;
    solve();
    return 0;
}
