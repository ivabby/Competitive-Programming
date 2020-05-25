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

int n,m;
string s[20];
string ans;
bool f[26][26];
int diff[20];

void findit(int p,string b)
{
    if(p == m)
    {
        ans = b;
        return;
    }

    for(int i=0;i<26 && ans.length() == 0;i++)
    {
        if(f[p][i])
        {
            bool ok = true;
            for(int j=0;j<n;j++)
            {
                if((s[j][p] - 'a') != i)
                    diff[j]++;
                if(diff[j] > 1)
                {
                    ok = false;
                }
            }
            if(ok)
            {
                findit(p+1 , b+(char)(i+97));
            }
            for(int j=0;j<n;j++)
                    if((s[j][p] - 'a') != i)
                        diff[j]--;
        }
            
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<=10;i++)
        {
            diff[i] = 0;
            for(int j=0;j<26;j++)
                f[i][j] = false;
        }
        ans = "";
        cin>>n>>m;
        forr(0,n-1)
        {
            cin>>s[i];
            for(int j=0;j<m;j++)
                f[j][s[i][j] - 'a'] = true;
        }
        findit(0 , "");

        if(ans == "")
            cout<<"-1\n";
        else
            cout<<ans<<"\n";
    }
    
    return 0;
}
