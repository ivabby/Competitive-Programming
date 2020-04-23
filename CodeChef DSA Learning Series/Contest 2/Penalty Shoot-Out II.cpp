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
        int n;
        string s;
        cin>>n>>s;

        int left =  n - 1;
        int a = 0 , b = 0 , i = 0;
        for(i=0;i<2*n;i++)
        {
            if(i%2 == 0)
                a = (s[i] == '1')?a+1:a;
            else
                b = (s[i] == '1')?b+1:b;

            
            if(i%2 == 0 && a >b+left+1)
                break;
            else if(i%2 == 1 && a>b+left)
                break;
            else if(i%2 == 1 && b>a+left)
                break;
            else if(i%2 == 0 && b>a+left)
                break;


            if((i+1)%2 == 0)
                left--;
        }
        if(i != 2*n)
            i++;

        cout<<i<<"\n";
    }

    
    return 0;
}
