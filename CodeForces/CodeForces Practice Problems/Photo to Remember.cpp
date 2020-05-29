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
const int N = (int)2e5 + 9;
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
int w[N],h[N],a[N],b[N];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n;
    cin>>n;
    int s = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>h[i];
        s += w[i];
    }

    for(int i=1;i<=n;i++)
        a[i] = max(a[i-1] , h[i]);
    
    for(int i=n;i>=1;i--)
        b[i] = max(b[i+1] , h[i]);

    for(int i=1;i<=n;i++)
    {
        ll W = s - w[i];
        ll H = max(b[i+1] , a[i-1]);
        // cout<<W<<" "<<H<<" ";
        cout<<W*H<<" ";
    }


    return 0;
}
