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

vector<string> digits = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    vector<string> s(n);
    vector<vector<int>> dist(n , vector<int>(10));

    forr(0,n-1)
    {
        cin>>s[i];
        for(int d=0;d<10;d++)
        {
            for(int j=0;j<7;j++)
            {
                char x = s[i][j];
                char y = digits[d][j];

                if(x == '1' && y == '0')
                {
                    dist[i][d] = -1;
                    break;
                }

                if(x == '0' && y == '1')
                {
                    dist[i][d]++;
                }
            }
        }
    }


    vector<vector<int>> dp(n+1 , vector<int>(k+1));
    dp[n][0] = 1;
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<=k;j++)
            if(dp[i][j])
            {
                for(int d=0;d<10;d++)
                {
                    if(dist[i-1][d] != -1 && j + dist[i-1][d] <= k)
                        dp[i-1][j + dist[i-1][d]] = 1;
                }
            }
    }

    if(dp[0][k] == 0)
    {
        cout<<"-1";
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=9;j>=0;j--)
        {
            if(dist[i][j] != -1 && k >= dist[i][j] && dp[i+1][k - dist[i][j]])
            {
                cout<<j;
                k -= dist[i][j];
                break;
            }
        }
    }
    
    return 0;
}
