#include<bits/stdc++.h>
#include<set>
#include<deque>
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
int t,n,a[N];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while (t--)
    {
        cin>>n;
        forr(1,n) cin>>a[i];

        int ans = 0 , j = 0;
        map<int,deque<int>> m;
        ll cnt = 0;
        forr(1,n)
        {
            while(j+1<=n && m[a[i]].size()<2)
            {
                j+=1;
                m[a[j]].push_back(j);
            }

            if(m[a[i]].size() >= 2)
            {
                deque<int> q = m[a[i]];
                if(ans == 0) ans = q[1] - q[0] + 1;
                else ans = min(ans , q[1] - q[0] + 1);
            }
            m[a[i]].pop_front();
        }
        if(ans == 0) ans = -1;
        cout<<ans<<"\n";
    }
    
    return 0;
}
