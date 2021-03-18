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
int n,m;
int a[N];
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t,val;
    cin>>t;
    while(t--) {
        memset(a,0,sizeof a);

        cin>>n>>m;
        forr(i,0,n) {
            cin>>val;
            a[val%m]++;
        }


        int ans = (a[0] == 0)?0:1;
        int i = 1 , j = m-1;

        while(i < j) {
            if(a[i]==0 &&  a[j] ==0) {

            }
            else if(a[i] == 0) {
                ans += a[j];
            } 
            else if(a[j] == 0) {
                ans += a[i];
            }
            else {
                int mn = min(a[i] , a[j]);
                ans++;
                a[i] -= mn;
                a[j] -= mn;

                if(a[i] > 0) {
                    a[i]--;
                    if(a[i] > 0)
                        ans += a[i];
                }
                else {
                    a[j]--;
                    if(a[j] > 0) 
                        ans += a[j];
                }
            }
            i++;
            j--;
        }

        if(i == j && a[i]) {
            ans++;
        }

        cout<<ans<<"\n";

    }
    
    return 0;
}
