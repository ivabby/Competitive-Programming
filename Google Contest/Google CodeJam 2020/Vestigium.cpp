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
const int N = (int)1e4 + 9;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

int t,n,a[110][110];

void solve(){
    cin>>n;
    ll s = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
        s+=a[i][i];
    }

    ll row = 0 , column = 0;
    for(int i=0;i<n;i++)
    {
        set<int> r,c;
        for(int j=0;j<n;j++)
        {
            r.insert(a[i][j]);
            c.insert(a[j][i]);
        }
        if(r.size() != n) row++;
        if(c.size() != n) column++;
    }

    cout<<s<<" "<<row<<" "<<column<<"\n";
}

int main()
{
    IOS;
    cin>>t;
    
    for(int cases = 1; cases<=t;cases++)
    {
        cout<<"Case #"<<cases<<": ";
        solve();
    }
    return 0;
}
