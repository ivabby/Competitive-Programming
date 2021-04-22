#include<bits/stdc++.h>
#include<stdio.h>
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

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);

    ll x = 0;

    forr(i,0,n) {
        cin>>a[i];
        x^=a[i];
    }
    if(x == 0) {
        cout<<"YES\n";
        return;
    }

    int i=0,j=n-1;
    ll cur = 0;
    while(i<n) {
        cur ^= a[i];
        if(cur == x) break;
        i++;
    }

    cur = 0;
    while(j>=0) {
        cur ^= a[j];
        if(cur == x) break;
        j--;
    }

    if(i < j) cout<<"YES\n";
    else cout<<"NO\n";
    
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t = 1;
    cin>>t;
    while(t--) {
        solve();
    }
    

    return 0;
}
