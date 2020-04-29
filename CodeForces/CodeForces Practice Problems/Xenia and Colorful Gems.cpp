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
const int N = (int)100 + 9;
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
 
ll calc(ll x,ll y,ll z)
{
    return (x-y)*(x-y) + (y-z)*(y-z) + (z-x)*(z-x);
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
        int cnt[3];
        forr(0,2)   cin>>cnt[i];
 
        vector<int> v[3];
        for(int i=0;i<3;i++)
        {
            int x;
            for(int j=0;j<cnt[i];j++)
            {
                cin>>x;
                v[i].pb(x);
            }
            sort(all(v[i]));
        }
 
        ll mini = (ll)4e18 + 10;
        // cout<<mini<<" ";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                for(int k=0;k<3;k++)
                {
                    if(i==j || j==k || k==i)    continue;
 
                    // cout<<i<<" "<<j<<" "<<k<<"\n";
                    for(auto  x: v[i])
                    {
                        auto it1 = lower_bound(v[j].begin() , v[j].end() , x);
                        auto it2 = upper_bound(v[k].begin() , v[k].end() , x);
                        if(it1!=v[j].end() && it2!=v[k].begin())
                        {
                            int y = *it1;
                            // if((upper_bound(all(v[k]) , x) - v[k].begin() - 1) > 0)
                                it2--;
                            int z = *it2;
                            mini = min(mini , calc(x,y,z));
                        } 
                    }
                }
        
        cout<<mini<<"\n";
    }
    return 0;
}
