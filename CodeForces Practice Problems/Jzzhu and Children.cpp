#include<bits/stdc++.h>
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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,m,a;
    cin>>n>>m;

    int pos = 1 , maxi = 0;
    forr(1,n)
    {
        cin>>a;
        int c = a/m;
        if(a%m) c++;

        if(c >= maxi)
        {
            maxi = c;
            pos = i;
        }
    }

    cout<<pos;
    return 0;
}
