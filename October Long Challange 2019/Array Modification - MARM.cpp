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
ll t,n,a[N],k;
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("in.txt" , "r" , stdin);
    // // freopen("out.txt" , "w" , stdout);
    // #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        int b[N];
        memset(b,0,sizeof b);
        cin>>n>>k;
        forr(0,n-1) cin>>a[i];
        ll q = k/n;
        ll r = k%n;
        // cout<<q<<" "<<r<<"\n";
        forr(0,n-1)
        {
            if(i == n-i-1)
            {
                if(k>i)
                    b[i] = 0;
                else
                    b[i] = a[i];
            }
            else if(i<k)
            {
                ll c = q;
                if(i<r) c++;
                if(i<n-i-1)
                {
                    c = c % 3;
                    // cout<<i<<" "<<c<<"\n";
                    if(c == 1) b[i] = a[i] ^ a[n-i-1];
                    else if(c == 2) b[i] = a[n-i-1];
                    else b[i] = a[i];
                }
                else
                {
                    c = c % 3;
                    // cout<<i<<" "<<c<<"\n";
                    if(c == 1) b[i] = a[n-i-1];
                    else if(c == 2) b[i] = a[i] ^ a[n-i-1];
                    else b[i] = a[i];
                }
            }
            else
                b[i] = a[i];
        }

        forr(0,n-1) cout<<b[i]<<" ";
        cout<<"\n";
    }
    return 0;
}