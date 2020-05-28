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
const int N = (int)500 + 9;
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
int t = 1;
int a[N][N];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
        cin>>t;
    #else
    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    

    while(t--)
    {

        int n,m,cur = 0;
        cin>>n>>m;

        forr(0,n-1)
        {
            for(int j=0;j<m;j++)
                cin>>a[i][j];
            cur ^= a[i][0];
        }
        
        int px = -1 , py = -1;
        for(int i=0;i<n && px==-1;i++)
        {
            for(int j=0;j<m;j++)
            {
                int nxt = cur ^ a[i][0] ^ a[i][j];
                if(nxt > 0)
                {
                    px = i;
                    py = j;
                }
            }
        }

        if(px == -1)
        {
            cout<<"NIE\n";
        }
        else{
            cout<<"TAK\n";
            for(int i=0;i<n;i++)
            {
                if(px == i) cout<<py+1<<" ";
                else cout<<"1 ";
            }
            cout<<"\n";
        }
    }


    return 0;
}
