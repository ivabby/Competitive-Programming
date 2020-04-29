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

int t,n;

void solve(){
    cin>>n;
    vector<pair<int,int>> a,b;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a.pb(mp(x,y));
        b.pb(mp(x,y));
    }

    sort(all(b));
    int cStart = -1 , cEnd = -1 , jStart = -1  , jEnd = -1;
    map<pair<int,int> , queue<string>> m;

    for(auto i : b)
    {
        int start = i.first , end = i.second;
        if(start>=jEnd && m[mp(start , end)].size() == 0)
        {
            jStart = start;
            jEnd = end;
            m[mp(start , end)].push("J");
        }
        else if(start>=cEnd && m[mp(start , end)].size() <= 1)
        {
            cStart = start;
            cEnd = end;
            m[mp(start , end)].push("C");
        }
        else{
            cout<<"IMPOSSIBLE\n";
            return;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<m[mp(a[i].first , a[i].second)].front();
        m[mp(a[i].first , a[i].second)].pop();
    }
    cout<<"\n";
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
