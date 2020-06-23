#include<bits/stdc++.h>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
#define forr(i,a,n) for (int i = (a); i < (n); ++i)
#define fore(i,a,n) for (int i = (a); i <= (n); ++i)
#define ford(i,a,b) for (int i = (a); i >= (b); --i)
#define MAX 1000000007LL
#define mod 998244353
#define forn(n,a) for(int i=n;i>=a;i--)
#define all(x) x.begin() , x.end()
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long
#define pii pair<int,int>
#define pll pair<long,long>
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
        int n;
        string s;
        cin>>n>>s;

        vector<int> one,zero;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
                zero.pb(i);
            else
                one.pb(i);
        }
        
        if(zero.size() == 0 || one.size() == 0)
        {
            cout<<s<<"\n";
        }
        else
        {
            if(zero[zero.size() - 1] < one[0])
            {
                cout<<s<<"\n";
            }
            else{
                int i = -1 , j = n;
                int c1 = 0 , c2 = 0;
                while(i+1<n && s[i+1] == '0')
                    i++,c1++;

                while(j>=0 && s[j-1] == '1')
                    j--,c2++;
                
                string ans = "";
                while(c1--)
                    ans = ans + "0";
                ans = ans + "0";
                while(c2--)
                    ans = ans + "1";
                cout<<ans<<"\n";
            }
        }
    }

    return 0;
}
