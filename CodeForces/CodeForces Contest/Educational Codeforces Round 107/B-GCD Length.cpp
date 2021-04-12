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

bool find(ll n,int sz) {
    // cout<<n<<" : "<<sz<<" : ";
    int cnt = 0;
    while(n > 0) {
        cnt++;
        n/=10;
    }
    // cout<<cnt<<"\n";
    return sz==cnt;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--) {
        int x,y,c;
        cin>>x>>y>>c;
        int k = c;

        int xx = x,yy = y;

        ll n1 = 1 , n2 = 1;
        x-=c;
        y-=c;
        while(c>1) {
            n1*=10;
            n2*=10;
            c--;
        }

        while(x--) {
            n1*=10;
        }

        while(y--) {
            n2*=11;
        }

        cout<<n1<<" "<<n2;
        cout<<"\n";

    }
    
    
    return 0;
}
