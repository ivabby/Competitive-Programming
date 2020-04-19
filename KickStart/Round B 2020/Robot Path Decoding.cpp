#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(a,n) for(int i=a;i<=n;i++)
#define MAX 1000000007LL
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
const int N = (int)100 + 9;

void solve(){
    string s;
    cin>>s;


    ll mod = 1e9;
    ll x = 0 , y = 0;
    vector<ll> mul = {1};
    for(char c : s)
    {
        if(c>='2' && c<='9')
            mul.pb((mul.back() * (c - '0'))%mod);
        else if(c == 'E')
            x = (x + mul.back()) % mod;
        else if(c == 'W')
            x = ((x - mul.back())%mod + mod)%mod;
        else if(c == 'S')
            y = (y + mul.back())%mod;
        else if(c == 'N')
            y = ((y - mul.back())%mod + mod)%mod;
        else if(c == '(')
            continue;
        else
            mul.pop_back();        
    }

    cout<<x+1<<" "<<y+1<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
