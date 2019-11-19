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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    ll odd = 0 , even = 0;
    cin>>n;
    forr(1,n)
    {
        int a;
        cin>>a;
        if(a&1 == 1) odd++;
        else even++;
    }

    if(n%2 == 0)
    {
        if(odd == even)
            cout<<"DL\n";
        else
            cout<<"DETAIN\n";
    }
    else
    {
        int sz = n/2;
        if(sz == even && sz+1 == odd)
            cout<<"DL";
        else if(sz+1 == even && sz == odd)
            cout<<"DL";
        else
            cout<<"DETAIN";
    }
    return 0;
}
