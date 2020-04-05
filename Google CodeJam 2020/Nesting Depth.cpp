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
    string s;
    cin>>s;
    string ans = "";

    ll cnt = 0;
    for(int i=0;i<s.length();i++)
    {
        int v = s[i] - '0';

        if(v == 0)
        {
            while(cnt > 0)
            {
                cnt--;
                ans = ans + ")";
            }
            ans = ans + "0";
        }
        else{
            while(cnt != v)
            {
                if(cnt < v)
                {
                    cnt++;
                    ans = ans + "(";
                }
                else{
                    cnt--;
                    ans = ans + ")";
                }
            }
            ans = ans + to_string(v);
        }
    }
    while(cnt--)
        ans = ans + ")";
    cout<<ans<<"\n";
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
