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
const int N = (int)1e5*2 + 9;
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
int t,n,k,d;
int a[N];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        map<int,int> c;
        forr(1,n) cin>>a[i];

        ll mini = k;
        // int c[k+10] = {0};
        ll diff = 0;
        forr(1,d)
        {
            if(c[a[i]] == 0) diff++;
            c[a[i]]++;
        }
        int j = d , i=1;
        mini = min(diff , mini);
        while(j+1<=n)
        {
            j++;
            c[a[i]]--;
            if(c[a[i]] == 0) diff--;

            if(c[a[j]] == 0) diff++;
            c[a[j]]++;

            mini = min(mini , diff);
            i++;
        }
        cout<<mini<<"\n";
    }
    return 0;
}