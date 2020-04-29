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
int t;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        ll odd = 0 , cnt = 0;
        for(int i=0;i<n;i++)
            if((s[i] - '0')&1) odd++;
        if(odd <= 1) cout<<"-1\n";
        else{
            for(int i=0;i<n;i++)
            {
                if((s[i] - '0')&1)
                {
                    cout<<s[i];
                    cnt++;
                }
                if(cnt == 2) break;
            }
            cout<<"\n";
        }
    }
    return 0;
}
