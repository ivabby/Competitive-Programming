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
const int N = (int)100 + 9;

void solve(){
    int n;
    ll d;
    cin>>n>>d;
    vector<ll> a(n);
    forr(0,n-1) cin>>a[i];

    ll mini = d;
    for(int i=n-1;i>=0;i--)
    {
        ll val = mini / a[i];
        val = val * a[i];
        mini = min(mini , val);
    }
    cout<<mini<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
