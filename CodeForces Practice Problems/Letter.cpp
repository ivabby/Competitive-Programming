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
const int N = (int)2e5 + 9;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

ll power(ll x,ll y)
{
    ll ans = 1;
    while(y>0)
    {
        if(y%2 == 1)
            ans = ans*x;
        x=x*x;
        y=y>>1;
    }
    return ans;
}

bool check(set<int> s,int a){
    if(s.find(a) != s.end()) return 1;
    return 0;
}

void solve(){
    string a,b;
    getline(cin , a);
    getline(cin , b);
    map<char,int> m;
    for(char c : a)
    {
        if(c != ' ')
            m[c]++;
    }
    for(char c : b)
    {
        if(c!=' ')
        {
            if(m[c] == 0)
            {
                // cout<<c<<" ";
                cout<<"NO";
                return;
            }
            m[c]--;
        }
    }
    cout<<"YES";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    IOS;
    solve();
    return 0;
}
