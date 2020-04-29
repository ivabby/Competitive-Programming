#include<bits/stdc++.h>
#include<set>
#include<string>
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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int a,n;
    cin>>n;
    ll zero = 0 , c = 0;
    forr(1,n)
    {
        cin>>a;
        if(a) c+=5;
        else zero+=1;
    }

    if(zero == 0)
    {
        cout<<"-1";
    }
    else{
        string ans = "";
        ll q = c/45;
        while(q-->0)
        {
            ans = ans + "555555555";
        }
        if(ans == "")
            ans = "0" , zero = 0;
        while(zero--)
            ans+="0";
        cout<<ans;
    }

    return 0;
}
