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
    
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,q;
        cin>>a>>b>>q;
        vector<int> p(a*b+10 , 0);
        forr(1,a*b)
        {
            p[i] += p[i-1];
            if((i%a)%b != (i%b)%a)
                p[i]++;
        }

        ll len = a*b;
        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            x--;
            ll v1 = p[len] * (y/len) + p[y%len];
            ll v2 = p[len] * (x/len) + p[x%len];

            cout<<v1-v2<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
