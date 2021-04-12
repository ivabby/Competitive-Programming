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
    while(t--) {
        int n;
        cin>>n;
        
        vector<int> a(n+2);
        forr(i,0,n+2) cin>>a[i];

        sort(all(a));
        ll s = 0;
        forr(i,0,n) s+=a[i];

        if(s == a[n]) {
            forr(i,0,n) cout<<a[i]<<" ";
            cout<<"\n";
            continue;
        }

        s+=a[n];
        int pos = -1;
        forr(i,0,n+1) {
            if(s-a[i] == a[n+1]) {
                pos = i;
                break;
            }
        }

        if(pos == -1) cout<<"-1\n";
        else {
            forr(i,0,n+1) if(pos != i) cout<<a[i]<<" ";
            cout<<"\n";
        }

        
    }
    

    return 0;
}
