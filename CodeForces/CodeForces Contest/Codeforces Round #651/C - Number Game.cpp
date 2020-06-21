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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if(n == 1)
        {
            cout<<"FastestFinger\n";
            continue;
        }

        if(n%2 == 1 || n == 2)
        {
            cout<<"Ashishgup\n";
            continue;
        }

        ll even = 0 , odd = 0;
        while(n%2 == 0)
        {
            n/= 2;
            even++;
        }

        if(n == 1)
        {
            cout<<"FastestFinger\n";
            continue;
        }

        ll i = 3;
        while(i*i <= n)
        {
            if(n%i == 0)
            {
                n /= i;
                odd++;
            }
            else i+=2;
        }

        if(n > 1) odd++;


        if(odd == 0 || (odd == 1 && even == 1)) cout<<"FastestFinger\n";
        else cout<<"Ashishgup\n";

        
    }

    return 0;
}
