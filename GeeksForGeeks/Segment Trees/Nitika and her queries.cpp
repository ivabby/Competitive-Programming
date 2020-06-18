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


void build(int *a,int *t,int v,int tl,int tr)
{
    if(tl == tr)
    {
        t[v] = a[tl];
    }
    else
    {
        int tm = (tl + tr)/2;
        build(a,t,v*2+1,tl,tm);
        build(a,t,v*2+2,tm+1,tr);
        t[v] = t[v*2+1] ^ t[v*2+2];
    }
}

int getXor(int *t,int v,int tl,int tr,int l,int r)
{
    if(l > r) return 0;
    if(tl == l && tr == r) return t[v];
    int tm = (tl+tr)/2;
    return getXor(t,v*2+1,tl,tm,l,min(tm,r)) ^ getXor(t,v*2+2,tm+1,tr,max(l,tm+1),r);
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);    
    // #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n] , tot = 0;
        forr(i,0,n)
        {
            cin>>a[i];
            tot ^= a[i];
        }

        int sz = 2 * pow(2 , ceil(log2(n))) - 1;
        int *t = new int[sz];

        build(a,t,0,0,n-1);
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int v = getXor(t,0,0,n-1,l-1,r-1);
            cout<<(v^tot)<<"\n";
        }
    }    

    return 0;
}
