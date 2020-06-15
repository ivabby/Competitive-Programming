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
int a[N],n;
int ans = 0;

int dfs(int cur)
{
    if(cur > n) return 0;

    int left = a[cur*2] + dfs(cur * 2);
    int right = a[cur*2 + 1] + dfs(cur * 2 + 1);

    // cout<<cur<<" "<<left<<" "<<right<<"\n";
    ans = ans + abs(left - right);

    return max(left , right);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>n;

    n = pow(2,n+1) - 1;

    fore(i,2,n)
    {
        cin>>a[i];
    }

    dfs(1);

    cout<<ans;
    
    return 0;
}
