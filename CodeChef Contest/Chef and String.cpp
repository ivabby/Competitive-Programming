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
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length() == 1 || s.length() == 2)
            cout<<"YES\n";
        else{
            int n = s.length();
            string v1 = "" , v2 = "";
            int j = 0 , i = 2;
            string ans = "YES";
            while(j<n)
            {
                if(s[i] != s[j])
                {
                    ans = "NO";
                    break;
                }
                i = (i+1)%n;
                j++;
            }

            if(ans == "NO")
            {
                ans = "YES";
                i = n - 2 , j = 0;
                while(j<n)
                {
                    if(s[i] != s[j])
                    {
                        ans = "NO";
                        break;
                    }
                    i = (i+1)%n;
                    j++;
                }
            }

            cout<<ans<<"\n";
            // cout<<a1<<" "<<a2<<"\n";
        }
    }
    
    return 0;
}
