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
const int N = (int)1e9;
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
        ll n,k;
        cin>>n>>k;
        if(k == 1)
            cout<<n<<"\n";
        else if(n <= k)
            cout<<"1\n";
        else
        {
            ll mini = n;
            for(ll i=2;i*i<=n;i++)
            {
                if(n%i == 0)
                {
                    if(i <= k)
                        mini = min(mini , n/i);
                    ll v = n/i;
                    if(v <= k)
                        mini = min(mini , n/v);
                }
            }
            cout<<mini<<"\n";
        }
    }
    
    return 0;
}
