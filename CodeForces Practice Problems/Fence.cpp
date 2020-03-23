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
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    IOS;
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    forr(0,n-1) cin>>a[i];

    ll s = 0 , index = 0;
    for(int i=0;i<k;i++)
        s+=a[i];
    ll cur = s;
    int i = 0 , j = k-1;
    while(j+1<n)
    {
        j++;
        cur = cur - a[i] + a[j];
        i++;
        if(cur < s)
        {
            s = cur;
            index = i;
        }
    }

    cout<<index+1;
    return 0;
}
