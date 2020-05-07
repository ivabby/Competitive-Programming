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
const int N = 2000 + 9;
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
ll a[N][N];
ll s1[10000] , s2[10000];
ll best1 = -1 , best2 = -1;
pair<int,int> p1,p2;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n;
    cin>>n;
    forr(1,n)
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            s1[i+j] += a[i][j];
            s2[i-j+n] += a[i][j];
        }

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            ll s = s1[i+j] + s2[i-j+n] - a[i][j];
            if(i%2 == j%2)
            {
                if(s > best1)
                {
                    best1 = s;
                    p1 = mp(i,j);
                }
            }
            else
                if(s > best2)
                {
                    best2 = s;
                    p2 = mp(i,j);
                }
        }
    
    cout<<best1+best2<<"\n";
    cout<<p1.first<<" "<<p1.second<<" "<<p2.first<<" "<<p2.second<<"\n";
    
    return 0;
}
