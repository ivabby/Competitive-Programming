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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string b = "";
    int f[26] = {0};
    forr(1,k)
    {
        char c;
        cin>>c;
        f[c-'a']++;
    }
    ll cnt = 0;
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        if(f[s[i] - 'a'] == 0)
        {
            ans = ans + (cnt * (cnt + 1))/2;
            cnt = 0;
        }
        else cnt++;
    }
    ans = ans + (cnt*(cnt + 1))/2;
    cout<<ans<<"\n";
    return 0;
}
