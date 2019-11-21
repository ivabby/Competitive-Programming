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
const int N = (int)1000 + 9;
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
int n,m,d,c[N],a[N];
ll s = 0;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>n>>m>>d;
    forr(1,m) 
    {
        cin>>c[i]; s+=c[i];
    }

    if(s>n){ cout<<"NO\n"; return 0;}
    
    int j=1,k=0,cnt=1,i;
    int prev = 1;
    for(i=1;i<=n;)
    {
        if(s == 0) break;
        if(s==n-i+1)
        {
            for(int k=1;k<=c[j];k++) a[k] = cnt;
            cnt++;
            s-=c[j];
            i+=c[j];
            prev = 0;
            j++;
        }
        else if(prev == d)
        {
            for(int k=1;k<=c[j];k++) a[k] = cnt;
            prev = 0;
            cnt++;
            s-=c[j];
            i+=c[j];
            j++;
        }
        else
        {
            // cout<<"0 ";
            i++;
        }
        prev++;
    }
    if(i+d<=n+1) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        forr(1,n) cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
