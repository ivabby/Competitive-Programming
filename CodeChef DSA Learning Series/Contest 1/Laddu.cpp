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
        int n;
        string s;
        cin>>n>>s;

        int v;
        if(s == "INDIAN")
            v = 200;
        else
            v = 400;

        ll ans = 0;

        while(n--)
        {
            cin>>s;
            if(s == "TOP_CONTRIBUTOR")
                ans += 300;
            else if(s == "CONTEST_HOSTED")
                ans += 50;
            else if(s == "BUG_FOUND")
            {
                int a;
                cin>>a;
                ans += a;
            }
            else{
                int a;
                cin>>a;
                ans += 300;

                if(a < 20)
                    ans += (20 - a);
            }
        }

        cout<<ans/v<<"\n";
    }
    return 0;
}
