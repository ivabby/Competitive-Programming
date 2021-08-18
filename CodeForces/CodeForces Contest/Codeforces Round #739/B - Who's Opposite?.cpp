#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define     forr(i,a,n)     for (int i = (a); i < (n); ++i)
#define     fore(i,a,n)     for (int i = (a); i <= (n); ++i)
#define     ford(i,a,b)     for (int i = (a); i >= (b); --i)
#define     MAX             1000000007LL
#define     mod             998244353
#define     forn(n,a)       for(int i=n;i>=a;i--)
#define     all(x)          x.begin() , x.end()
#define     mp(x,y)         make_pair(x,y)
#define     pb(x)           push_back(x)
#define     ll              long long
#define     pii             pair<int,int>
#define     pll             pair<long,long>

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
const int N = (int)1e5 + 9;


void solve() {
    int a,b,c;
    cin>>a>>b>>c;

    if(a > b) swap(a,b);
    // cout<<a<<" "<<b<<"\n";

    if(a*2 <= b) {
        if(a != 1) {
            b = b - (a - 1);
            a = 1;
        }
        int mx = 2 * (b - 1);
        // cout<<a<<" "<<b<<" "<<mx<<" : ";

        if(c <= mx) {   
            if(c < b) {
                cout<<b+(c-1)<<"\n";
            } else {
                cout<<a+(c-b)<<"\n";
            }
        } else {
            cout<<"-1\n";
        }
    } else {
        cout<<"-1\n";
    }
}

int main()
{
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);    
    
    
    int t = 1;
    cin>>t;
    while(t--) {
        solve();
    }
    

    return 0;
}
