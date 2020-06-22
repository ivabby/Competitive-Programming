#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(i,a,n) for (int i = (a); i < (n); ++i)
#define fore(i,a,n) for (int i = (a); i <= (n); ++i)
#define ford(i,a,b) for (int i = (a); i >= (b); --i)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
#define pii pair<int,int>
#define pll pair<long,long>
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
int n,k,a[N];

bool check(int x,int cur)
{
    int ans = 0;
    fore(i,1,n)
    {
        if(!cur)
        {
            ans++;
            cur ^= 1;
        }
        else{
            if(a[i] <= x)
            {
                ans++;
                cur ^= 1;
            }
        }
    }

    return ans >= k;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>n>>k;
    fore(i,1,n) cin>>a[i];

    int l = 0 , h = 1e9;
    while(l < h)
    {
        int mid = (l+h)/2;
        if(check(mid,0) || check(mid,1))
            h = mid;
        else
            l = mid + 1;
    }

    cout<<l<<"\n";

    return 0;
}