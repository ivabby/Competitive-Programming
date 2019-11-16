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
int t;
string s;
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("in.txt" , "r" , stdin);
    // // freopen("out.txt" , "w" , stdout);
    // #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t>>s;
    if(t%2 == 0)
    {
        string s1="",s2="";
        for(int i=0;i<t/2;i++)
            s1+=s[i];
        for(int i=t/2;i<t;i++)
            s2+=s[i];
        if(s1 == s2)
            cout<<"Yes";
        else
            cout<<"No";
    }
    else{
        cout<<"No";
    }
    return 0;
}
