#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
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
#define     pii             pair<int,int>
#define     ll              long long
#define     pii             pair<int,int>
#define     pll             pair<long,long>

const       int N =         (int)1e5 + 9;
const       int INF =       1e9+7;

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

int a[110][110];

void solve() {
    int n;
    cin>>n;

    if(n == 1) {
        cout<<"1\n";
    } else if(n == 2) {
        cout<<"-1\n";
    } else {
        
        //  Fill Diagonal
        int val = 1;
        for(int i=1;i<=n;i++) {
            a[i][i] = val;
            val++;
        }

        for(int i=2;i<=n;i++) {
            
            int r = i , c = 1;
            while(r<=n && c<=n) {
                a[r][c] = val;
                val++;
                r++;
                c++;
            }

            r = 1 ; c = i;
            while(r<=n && c<=n) {
                a[r][c] = val;
                val++;
                r++;
                c++;
            }
        }

        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
            cout<<"\n";
        }

    }
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
