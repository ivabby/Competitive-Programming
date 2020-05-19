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

ll a[5100] , b[5100];

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        a[i+1] = a[i];
        b[i+1] = b[i];
        if(s[i] == 'a') a[i+1]++;
        else    b[i+1]++;
    }
    a[n+1] = a[n];
    b[n+1] = b[n];

    ll ans = max(a[n] , b[n]);

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            ans = max(ans , (a[n] - a[j]) + (b[j+1] - b[i-1]) + a[i-1]);
        }
    }
    cout<<ans;
    
    return 0;
}
