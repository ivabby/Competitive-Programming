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
const int INF=1e9+7;
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
int n;
ll c[N];
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
    while(t--) {
        cin>>n;
        forr(i,0,n) cin>>c[i];

        ll ans =  LONG_LONG_MAX;
        ll s1 = 0 , s2 = 0;
        ll mini1 = LONG_LONG_MAX , mini2 = LONG_LONG_MAX;
        ll cnt1 = 0 , cnt2 = 0;

        forr(i,0,n) {
            if(i%2 == 0) {
                cnt1++;
                s1 += c[i];
                mini1 = min(mini1 , c[i]);
            }
            else {
                cnt2++;
                s2 += c[i];
                mini2 = min(mini2 , c[i]);
            }

            if(s1 && s2) {
                ans = min(ans , s1 + (n-cnt1) * mini1 + s2 + (n-cnt2) * mini2);
            }
        }

        cout<<ans<<"\n";

    }

    
    return 0;
}
