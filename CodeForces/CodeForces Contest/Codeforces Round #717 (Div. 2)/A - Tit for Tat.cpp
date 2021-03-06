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
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    forr(i,0,n) cin>>a[i];

    int start = 0 , end = n-1;
    while(k>0 && start<end) {
        if(a[start] == 0) {
            start++;
            continue;
        }
        int left = 0;
        if(a[start] > k) {
            left = k;
            a[start] -= k;
            k = 0;
        } else {
            left = a[start];
            k -= a[start];
            a[start] = 0;
        }
        a[end]+=left;
        start++;
    }

    forr(i,0,n) cout<<a[i]<<" ";
    cout<<"\n";
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
