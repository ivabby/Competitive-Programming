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
int sz , tot;
bool check(){
    if(sz == tot) return true;
    return false;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n,m,k;
    cin>>n>>m>>k;
    tot = 0;
    sz = (n*m)/k;
    vector<pair<int,int>> path;
    int last = (n*m)%k;

    cout<<sz<<" ";
    for(int i=1;i<=n;i++)
    {
        if(i%2 == 1)
        {
            for(int j=1;j<=m;j++)
            {
                if(check() && k!=1){
                    k--;
                    tot = 0;
                    cout<<"\n";
                    if(k == 1) cout<<sz+last<<" ";
                    else    cout<<sz<<" ";
                }
                cout<<i<<" "<<j<<" ";
                tot++;
            }
        }
        else
        {
            for(int j=m;j>=1;j--)
            {
                if(check() && k!=1){
                    k--;
                    tot = 0;
                    cout<<"\n";
                    if(k == 1) cout<<sz+last<<" ";
                    else cout<<sz<<" ";
                }
                cout<<i<<" "<<j<<" ";
                tot++;
            }
        }
        
    }
    
    return 0;
}
