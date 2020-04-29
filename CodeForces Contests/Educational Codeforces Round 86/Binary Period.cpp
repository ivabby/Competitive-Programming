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
        ll one = 0 , zero = 0;
        for(char c : s)
        {
            if(c == '1')
                one++;
            else
                zero++;
        }
        int n = s.length();

        if(one == 0 || zero == 0)
            cout<<s<<"\n";
        else
        {
            int i = 0;
            while(one>0 || zero>0)
            {
                if(s[0] == '1')
                {
                    cout<<"10";
                    if(s[i] == '1')
                        one--;
                    else
                        zero--;
                    i++;
                }
                else
                {
                    cout<<"01";
                    if(s[i] == '0')
                        zero--;
                    else
                        one--;
                    i++;
                }
            }
            cout<<"\n";
        }
    }
    
    return 0;
}
