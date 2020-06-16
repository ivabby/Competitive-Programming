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
    while(t--)
    {
        string s;
        int n;
        cin>>s>>n;

        vector<int> b(n);
        forr(i,0,n) cin>>b[i];

        string ans(n , 'a');
        vector<vector<int>> group;

        while(true)
        {
            vector<int> pos;
            forr(i,0,n)
                if(b[i] == 0)
                    pos.pb(i);

            if(pos.empty()) break;

            group.pb(pos);
            forr(i,0,n)
            {
                if(b[i] == 0) b[i] = INT_MAX;
                else
                    for(auto j : pos)
                        b[i] -= abs(j - i);
            }
        }

        map<char,int> m;
        for(auto i:s)
            m[i]++;

        auto j = m.rbegin();
        for(auto i : group)
        {
            while(j->second < i.size())
                j++;

            for(auto p : i)
                ans[p] = j->first;
            j++;
        }

        cout<<ans<<"\n";
    }
    
    
    return 0;
}
