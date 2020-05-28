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
int t = 1,n,m;
string ans , s[30];
bool ok , st[20][26];
int diff[20];

void solve(int p,string ss)
{
    if(p == m)
    {
        ans = ss;
        ok = true;
        return;
    }
    
    for(int i=0;i<26 && !ok;i++)
    {
        if(st[p][i])
        {
            bool check = true;
            for(int j=0;j<n;j++)
            {
                if(s[j][p] - 'a' != i)
                    diff[j]++;

                if(diff[j] > 1)
                    check = false;
            }

            if(check)
                solve(p + 1 , ss + (char)(i + 97));

            for(int j=0;j<n;j++)
                if(s[j][p]-'a' != i)
                    diff[j]--;
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
        // cin>>t;
    #endif

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        forr(0,19)
            for(int j=0;j<26;j++)
                st[i][j] = false;

        forr(0,n-1)
        {
            cin>>s[i];
            for(int j=0;j<m;j++)
                st[j][s[i][j] - 'a'] = true;
        }

        ok = false;

        solve(0 , "");

        if(!ok)
            ans = "-1";

        cout<<ans<<"\n";
    }

    return 0;
}
