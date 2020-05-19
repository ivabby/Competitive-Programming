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
    
    int n;
    cin>>n;
    vector<int> a(n);
    int d = 0;
    forr(0,n-1) {
        cin>>a[i];
        d = __gcd(d , a[i]);
    }

    if(d > 1)
    {
        cout<<"-1";
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        if(a[i] == 1)
        {
            int ans = 0;
            for(int j=0;j<n;j++)
                if(a[j] != 1)
                    ans++;

            cout<<ans;
            return 0;
        }
    }

    int ans = 1e9;
    for(int i=0;i<n;i++)
    {
        d = 0;
        for(int j=i;j<n;j++)
        {
            d = __gcd(d , a[j]);
            if(d == 1)
            {
                ans = min(ans , j-i+n-1);
                break;
            }
        }
    }
    cout<<ans;
    
    return 0;
}
