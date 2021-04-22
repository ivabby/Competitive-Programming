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
const int N = (int)200005;
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
    vector<int> a(n);
    int s = 0;
    int g = 0;
    forr(i,0,n) {
        cin>>a[i];
        s+=a[i];
        g = __gcd(g , a[i]);
    }

    vector<int> dp(N , 0) , new_dp(N,0);
    dp[0] = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=200000;++j)
        {
            new_dp[j] |= dp[j];
            if(j >= a[i-1])
                new_dp[j] |= dp[j-a[i-1]];
        }
        dp = new_dp;
    }

    // for(int i=0;i<N;i++) {
    //     cout<<i<<" "<<dp[i]<<"\n";
    // }
    // cout<<"\n";

    if(s%2 == 1 || dp[s/2] == 0) {
        cout<<"0";
    } else {
        cout<<"1\n";
        forr(i,0,n) {
            if((a[i]/g)%2 == 1) {
                cout<<i+1;
                break;
            }
        }
    }
 
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
    // cin>>t;
    while(t--) {
        solve();
    }
    

    return 0;
}
