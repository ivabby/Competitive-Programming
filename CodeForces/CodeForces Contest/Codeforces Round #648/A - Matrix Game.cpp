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
int a[60][60];
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
    while(t--)
    {
        int n,m,x = 0 , y = 0;
        cin>>n>>m;

        fore(i,1,n)
            fore(j,1,m)
                cin>>a[i][j];

        fore(i,1,n)
        {
            bool ok = 1;
            fore(j,1,m) if(a[i][j] == 1) ok = 0;

            if(ok)
                x++;
        }

        fore(j,1,m)
        {
            bool ok = 1;
            fore(i,1,n) if(a[i][j] == 1) ok = 0;
            if(ok) y++;
        }

        int c = min(x,y);
        if(c%2 == 0) cout<<"Vivek\n";
        else cout<<"Ashish\n";
    }
    
    return 0;
}
