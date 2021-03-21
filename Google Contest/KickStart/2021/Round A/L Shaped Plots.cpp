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
const int INF=1e9+7;
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
int a[1100][1100];
int l = 0 , r = 0 , up = 0 , down = 0,rr,c;

void check(int i,int j) {
    int k = 1;
    l = 1;
    r = 1;
    up = 1;
    down = 1;

    while(j-k>=0 && a[i][j-k] == 1) {
        l++;
        k++;
    }

    k = 1;
    while(j+k<c && a[i][j+k] == 1) {
        k++;
        r++;
    }

    k = 1;
    while(i-k>=0 && a[i-k][j] == 1) {
        up++;
        k++;
    }

    k = 1;
    while(i+k<rr && a[i+k][j] == 1) {
        down++;
        k++;
    }

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
    for(int cases=1;cases<=t;cases++) {
        cout<<"Case #"<<cases<<": ";
        cin>>rr>>c;

        forr(i,0,rr) 
            forr(j,0,c)
                cin>>a[i][j];

        ll ans = 0;
        forr(i,0,rr) 
            forr(j,0,c) {
                if(a[i][j] == 0) continue;
                check(i,j);
                // cout<<(i+1)<<" "<<(j+1)<<" : "<<l<<" "<<r<<" "<<up<<" "<<down<<"\n";
                forr(k,2,min(rr,c) + 1) {
                    if(l >= k && down >= 2*k) {
                        ans++;
                    }
                    if(l >= k && up >= 2*k) {
                        ans++;
                    }
                    if(up >= k && l>=2*k) {
                        ans++;
                    }
                    if(up>=k && r>=2*k) ans++;
                    if(r>=k && up>=2*k) ans++;
                    if(r>=k && down>=2*k) ans++;
                    if(down>=k && r>=2*k) ans++;
                    if(down>=k && l>=2*k) ans++;

                }
            }

        cout<<ans<<"\n";
    }
    
    return 0;
}
