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
bool a[2][N];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    ll blocked = 0;
    while(q--){
        int x,y;
        cin>>x>>y;
        x--;
        y--;

        int delta = (a[x][y] == 0)?1:-1;
        a[x][y] = 1 - a[x][y];

        for(int dy=-1;dy<=1;dy++){
            if(y+dy<0 || y+dy>=n) continue;

            if(a[1-x][y+dy] == 1) blocked+=delta;
        }

        cout<<((blocked == 0)?"Yes\n":"No\n");
    }
    
    return 0;
}
