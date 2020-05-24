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
    if(y == 0)
        return 1;
    ll temp = power(x,y/2);
    if(y%2 == 1)
        return temp*temp*x;
    else    
        return temp*temp;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n,m,q;
    cin>>n>>m>>q;
    int a[n+1][m+1];
    map<int,int> mm;
    
    for(int i=1;i<=n;i++)
    {
        int c = 0 , maxi = 0;
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
            {
                c++;
                maxi = max(maxi , c);
            }
            else
                c = 0;
        }
        mm[i] = maxi;
    }
    
    while(q--)
    {
        int r,c;
        cin>>r>>c;
        a[r][c] = 1 - a[r][c];


        int cnt = 0 , maxi = 0;
        for(int j=1;j<=m;j++)
        {
            if(a[r][j] == 1)
            {
                cnt++;
                maxi = max(maxi , cnt);
            }
            else
                cnt = 0;
        }
        mm[r] = maxi;

        int ans = 0;
        for(auto i : mm)
            ans = max(ans , i.second);


        cout<<ans<<"\n";
    }

    return 0;
}
