#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(i,a,n) for (int i = (a); i < (n); ++i)
#define fore(i,a,n) for (int i = (a); i <= (n); ++i)
#define ford(i,a,b) for (int i = (a); i >= (b); --i)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
#define pii pair<int,int>
#define pll pair<long,long>
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
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<ll> a(n);
        forr(i,0,n) cin>>a[i];

        vector<ll> b(k);
        forr(i,0,k) cin>>b[i];

        sort(all(a));
        sort(all(b));

        ll ans = 0;
        for(int i=n-1;i>=n-k;i--)
            ans += a[i];

        forr(i,0,k)
            b[i]--;

        int pos1 = n -k - 1;
        int pos2 = n - 1;
        forr(i,0,k)
        {
            if(b[i] == 0)
            {
                ans += a[pos2];
                pos2--;
                continue;
            }
            ans += a[pos1 - b[i] + 1];
            pos1 -= b[i];
        }

        cout<<ans<<"\n";
    }
    

    return 0;
}
