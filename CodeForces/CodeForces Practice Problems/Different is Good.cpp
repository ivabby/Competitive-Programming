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

    if(n > 26)
    {
        cout<<"-1\n";
    }
    else{
        int f[26];
        memset(f,0,sizeof f);

        int cnt = 0;
        for(char c : s)
            f[c-'a']++;

        for(int i=0;i<26;i++)
            if(f[i] > 1)
                cnt = cnt + (f[i] - 1);

        cout<<cnt<<"\n";
    }
    
    return 0;
}
