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
    if(y == 0)
        return 1;
    ll temp = power(x,y/2);
    if(y%2 == 1)
        return temp*temp*x;
    else    
        return temp*temp;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll k,d0,d1;
        ll ans;
        cin>>k>>d0>>d1;
        ll s = d0 + d1;
        ll sc = (2*s)%10 + (4*s)%10 + (8*s)%10 + (6*s)%10;
        ll nc = (k-3)/4;

        if(k == 2)
            ans = s;
        else{
            ans = s + (s%10) + sc*nc;
            int left = k - 3 - nc*4;
            int j = 2;
            for(int i=0;i<left;i++)
            {
                ans += (s*j)%10;
                j = (j*2)%10;
            }
        }

        if(ans%3 == 0)  cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}
