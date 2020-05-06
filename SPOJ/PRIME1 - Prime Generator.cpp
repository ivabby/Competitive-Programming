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

bool isPrime(ll n)
{
    for(ll i=3;i*i <= n;i+=2)
        if(n%i == 0)
            return false;

    return true;
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
        ll n,m;
        cin>>n>>m;
        if(n%2 == 0 || n == 1)
        {
            n = (n == 1) ? n + 2 : n + 1;
            if(n == 3)
                cout<<"2\n";
        }

        for(ll i=n;i<=m;i+=2)
            if(isPrime(i))
                cout<<i<<"\n";

        cout<<"\n";
    }
    
    return 0;
}
