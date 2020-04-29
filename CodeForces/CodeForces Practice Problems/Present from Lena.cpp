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
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=i;j<n;j++) cout<<"  ";

        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(0!=i) cout<<" ";
        }

        for(int j=i-1;j>=0;j--){
            cout<<j;
            if(j!=0) cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i+1;j<=n;j++) cout<<"  ";

        for(int j=0;j<=i;j++){
            cout<<j;
            if(i != 0) cout<<" ";
        }

        for(int j=i-1;j>=0;j--){
            cout<<j;
            if(j!=0) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
