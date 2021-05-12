#include<bits/stdc++.h>
using namespace std;
#define     forr(i,a,n)     for (int i = (a); i < (n); ++i)
#define     fore(i,a,n)     for (int i = (a); i <= (n); ++i)
#define     ford(i,a,b)     for (int i = (a); i >= (b); --i)
#define     MAX             1000000007LL
#define     mod             998244353
#define     forn(n,a)       for(int i=n;i>=a;i--)
#define     all(x)          x.begin() , x.end()
#define     mp(x,y)         make_pair(x,y)
#define     pb(x)           push_back(x)
#define     ll              long long
#define     pii             pair<int,int>
#define     pll             pair<long,long>
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

int a[N],b[N];

void solve() {
    int n,k;
    cin>>n>>k;
    forr(i,0,n) cin>>a[i];
    sort(a,a+n);
    
    
    ll ans = 0;
    int i = 0 , j = n-1;
    int pos = 0;
    
    forr(i,0,k) {
        int x;
        cin>>x;
        if(x == 1) {
            ans += a[j] * 2;
            j--; 
        } else {
            b[pos] = x;
            pos++;
        }
    }
    
    sort(b,b+pos,greater<int>());
    pos = 0;

    while(i <= j) {
        ans += a[j];
        b[pos]--;
        j--;

        if(b[pos] > 0) {
            ans += a[i];
            i += b[pos];
        } else {
            ans += a[j+1];
        }
        pos++;
        
    }

    cout<<ans<<"\n";

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
