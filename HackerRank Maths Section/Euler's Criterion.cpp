#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define MAX 1000000007LL
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
const int N = (int)100 + 9;

ll power(ll a,ll b,ll mod){
    if(b == 0)
        return 1;
    ll temp = power(a,b/2,mod);
    if(b%2 == 1)
        return (temp%mod*temp%mod*a%mod)%mod;
    else
        return (temp%mod * temp%mod)%mod;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a == 0)
        {
            cout<<"YES\n";
        }
        else if(power(a,(b-1)/2,b) == 1)    cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
