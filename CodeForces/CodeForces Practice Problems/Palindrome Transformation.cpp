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
int n,k;
string s;
    
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin>>n>>k>>s;
    k--;
    if(k >= n/2)
        k = n - 1  - k;

    int l = 0 , r = n/2 - 1;
    while(l<n/2 && s[l] == s[n - 1 - l])
        l++;

    while(r>=0 && s[r] == s[n - 1 - r])
        r--;

    ll ans = 0 , cnt = 0;
    for(int i=l;i<=r;i++)
    {
        int diff = abs(s[i] - s[n - 1 - i]);
        cnt += min(diff , 26 - diff);
    }

    if(l < r){
        ans += min(abs(l - k) , abs(r - k)) + abs(r - l) + cnt;
    }
    else if(l == r)
        ans += abs(l - k) + cnt;


    cout<<ans<<"\n";
    
    return 0;
}
