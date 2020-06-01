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

vector<pair<char,int>> solve(string a)
{
    vector<pair<char,int>> v;
    int n = a.length();
    for(int i=0;i<n;i++)
    {
        int cnt = 1;
        char c = a[i];
        while(i+1<n && a[i+1] == a[i])
        {
            cnt++;
            i++;
        }
        v.pb(mp(c , cnt));
    }

    return v;
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
        string a,b;
        cin>>a>>b;
        vector<pair<char,int>> s,t;
        s = solve(a);
        t = solve(b);

        bool ok = (s.size() == t.size());
        if(ok)
        {
            int n = s.size();
            for(int i=0;i<n;i++)
                if(s[i].first != t[i].first || s[i].second > t[i].second)
                    ok = false;
        }

        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
    return 0;
}
