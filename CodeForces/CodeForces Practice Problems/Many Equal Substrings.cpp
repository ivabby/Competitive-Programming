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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n,k;
    string s;
    cin>>n>>k>>s;

    int pos = 1 , cnt = 1;
    string ans = s;

    while(cnt < k)
    {
        if(pos >= ans.length())
        {
            ans += s;
            ++cnt;
        }
        else{
            bool ok = true;
            int len = 0;
            for(int i=0;i<s.length();i++)
            {
                if((pos+i) >= ans.size()) break;
                ++len;
                if(ans[pos+i] != s[i]) ok = false;
            }

            if(ok)
            {
                ans += s.substr(len);
                ++cnt;
            }
        }
        ++pos;
    }
    cout<<ans;
    
    return 0;
}
