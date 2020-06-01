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
    
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        int f1[26] , f2[26];
        for(int i=0;i<26;i++)
            f1[i] = 0 , f2[i] = 0;

        int n = a.length();
        for(int i=0;i<n;i++)
        {
            f1[a[i] - 'a']++;
            f2[b[i] - 'a']++;
        }

        string ans = "NO";
        for(int i=0;i<26;i++)
            if(f1[i] > 0 && f2[i] > 0)
                ans = "YES";
        
        cout<<ans<<"\n";
    }
    
    return 0;
}
