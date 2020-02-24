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
int n,m,a[110];
map<int , queue<int>> d;
set<int> s;

void ok(){
    sort(a,a+n);
    forr(0,n-1)
    {
        int j = i;
        int v = d[a[i]].front();
        int mini = min(j,v);
        int maxi = max(j,v);
        while(mini != maxi)
        {                
            if(s.find(mini) == s.end())
            {
                cout<<"NO\n";
                return;
            }
            mini++;
        }
        d[a[i]].pop();
    }

    cout<<"YES\n";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        s.clear();
        d.clear();
        forr(0,n-1)
        {
            cin>>a[i];
            d[a[i]].push(i);
        }

        forr(0,m-1)
        {
            int a;
            cin>>a;
            s.insert(a - 1);
        }
        ok();
    }
    return 0;
}
