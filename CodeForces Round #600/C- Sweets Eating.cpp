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
int n,m;
ll a[N];
ll s = 0;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>n>>m;
    forr(1,n) cin>>a[i];
    sort(a,a+n+1);
    
    int i=1,j=1;
    ll diff = 0;
    s = a[1];
    cout<<s<<" ";
    while(j+1<=n)
    {
        j+=1;
        s+=a[j];
        a[j] = s;
        if(j-i+1>m)
        {
            a[j]+=a[i];
            i++;
        }
        cout<<a[j]<<" ";
    }
    return 0;
}
