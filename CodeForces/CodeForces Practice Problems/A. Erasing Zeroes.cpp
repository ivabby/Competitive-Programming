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
int t,n;
string s;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>t;
    while(t--){
        cin>>s;
        n = s.length();
        int f = -1;
        int i = -1;
        while(i+1<n)
        {
            i++;
            if(s[i] == '1') break;
        }
        
        if(i+1 == n)
            cout<<"0\n";
        else{
            int j=n;
            while(j-1>=0)
            {
                j--;
                if(s[j] == '1') break;
            }

            ll cnt = 0;
            for(int k=i;k<=j;k++)
                cnt+=(s[k] == '0');
            cout<<cnt<<"\n";
        }
    }
    return 0;
}
