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
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    ll n,m;
    cin>>n>>m;

    if(m == 1)
    {
        ll val = (n * (n-1))/2;
        cout<<val<<" "<<val;
    }
    else{
        ll q = n/m;
        ll each = m*((q * (q-1))/2);
        ll rem = n%m;
        ll mini = each - ((q * (q-1))/2)*rem + rem*(((q+1) * (q+1-1))/2);
        ll val = (n-m+1);
        ll maxi = (val * (val -1))/2;
        cout<<mini<<" "<<maxi;
    }
    
    return 0;
}
