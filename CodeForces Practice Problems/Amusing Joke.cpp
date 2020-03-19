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
string a,b,c;

void solve(){
    int f[26] = {0};
    for(int i=0;i<c.length();i++)
        f[c[i] - 'A']++;

    for(int i=0;i<a.length();i++)
    {
        int d = a[i] - 'A';
        if(f[d] == 0){ cout<<"NO"; return;}
        f[d]--;
    }

    for(int i=0;i<b.length();i++)
    {
        int d = b[i] - 'A';
        if(f[d] == 0){ cout<<"NO"; return;}
        f[d]--;
    }

    for(int i=0;i<26;i++)
        if(f[i] != 0)
        {
            cout<<"NO";
            return;
        }

    cout<<"YES";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>a>>b>>c;

    solve();
    return 0;
}
