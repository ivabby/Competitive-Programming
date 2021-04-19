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
const int INF=1e9+7;
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

void solve() {
    ll x,y,n;

    cin>>x>>y;

    n = 1;
    while(n*n < x+y) {
        n++;
    }

    if(n*n != x+y) {
        cout<<"NO\n";
        return;
    }

    if(n == 1) {
        if(x == 1) {
            cout<<"YES\n";
            cout<<"1\n";
        } else {
            cout<<"NO\n";
        }
        return;
    }

    int even = 1 , odd = n-1 , flag = 0;
    while(odd >= 1) {
        ll oddPairs = even*odd*2;
        if(oddPairs == y) {
            flag = 1;
            break;
        }
        even++;
        odd--;
    }

    if(flag == 0) {
        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";
    cout<<n<<"\n";

    fore(i,1,odd) cout<<"1 "<<i+1<<"\n";
    forr(i,1,even) cout<<"2 "<<odd+i+1<<"\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t = 1;
    cin>>t;
    while(t--) {
        solve();
    }
    
    
    return 0;
}
