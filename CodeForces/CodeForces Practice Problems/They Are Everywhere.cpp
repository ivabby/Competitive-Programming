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
    
    int n;
    string s;
    cin>>n>>s;

    map<char,int> m;
    forr(0,n-1)
        m[s[i]]++;

    int cnt = 0 , tot = m.size();
    m.clear();
    int i = 0 , j = -1;
    int ans = n;

    while(i < n)
    {
        while(j+1<n && cnt != tot)
        {
            j++;
            char c = s[j];
            if(m[c] == 0)
                cnt++;
            m[c]++;
        }
        if(cnt == tot)
            ans = min(ans , j-i+1);

        char c = s[i];
        m[c]--;
        if(m[c] == 0)
            cnt--;
        i++;
    }

    cout<<ans;
    return 0;
}
