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
const int N = (int)2e5 + 9;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    IOS;
    
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    int x = ex - sx , y = ey - sy;

    int cnt = 0;
    for(int i=0;i<t;i++)
    {
        if(x>0 && s[i] == 'E')
            x--;
        if(x<0 && s[i] == 'W')
            x++;

        if(y>0 && s[i] == 'N')
            y--;
        if(y<0 && s[i] == 'S')
            y++;
        if(x==0 && y==0)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}
