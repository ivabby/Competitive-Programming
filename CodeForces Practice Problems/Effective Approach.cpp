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
    int n;
    cin>>n;
    map<int,int> m;
    int a;
    forr(1,n)
    {
        cin>>a;
        m[a] = i;
    }

    int q;
    cin>>q;
    ll c1 = 0 , c2 = 0;
    while(q--)
    {
        cin>>a;
        c1+=m[a];
        c2+=(n-m[a]+1);
    }
    cout<<c1<<" "<<c2<<"\n";
    return 0;
}
