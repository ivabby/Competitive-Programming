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
int find(set<int> a , int s,int n){

    for(int i=0;i<n;i++)
    {
        if(s+i<n && a.find(s+i) == a.end())
            return i;
        if(s-i>=0 && a.find(s-i) == a.end())
            return i;
    }

    return 0;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
    cin>>t;
    while(t--){
        int n,s,k;
        cin>>n>>s>>k;
        set<int> a;
        forr(1,k)
        {
            int x;
            cin>>x;
            a.insert(x-1);
        }
        cout<<find(a,s-1,n)<<"\n";
    }
    return 0;
}
