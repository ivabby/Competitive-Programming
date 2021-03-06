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

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    forr(0,n-1)
    {
        cin>>a[i];
    }

    // vector<string> palin;
    map<string , int> s;
    map<string , int> odd , even;
    string first = "" , second = "";
    forr(0,n-1)
    {
        string ss = a[i];
        string rev = "";
        for(int i=0;i<ss.length();i++)
            rev = ss[i] + rev;
        if(rev == ss)
        {
            if(ss.length()&1 == 0)
            {
                if(even[ss] > 0)
                {
                    even[ss]--;
                    first = first + ss;
                    second = ss + second;
                }
                else
                    even[ss]++;
            }
            else
            {
                if(odd[ss] > 0)
                {
                    odd[ss]--;
                    first = first + ss;
                    second = ss + second;
                }
                else
                    odd[ss]++;
            }
        }
        else{
            // cout<<ss<<" "<<rev<<" "<<s[ss].first<<" "<<s[rev]<<"\n";
            if(s[rev] > 0)
            {
                first = first + ss;
                second = rev + second;
                s[rev]--;
            }
            else
            {
                s[ss]++;
            }
            // cout<<ss<<" "<<rev<<" "<<s[ss]<<" "<<s[rev]<<"\n";
        }
        // cout<<ss<<"\n";
    }
    // cout<<first<<second;
    ll maxi = 0 ;
    string f = "";
    for(auto i : odd)
    {
        if(i.first.size() > maxi && i.second > 0)
        {
            f = i.first;
            maxi = f.length();
        }
    }

    for(auto i : even)
    {
        if(i.first.size() > maxi && i.second > 0)
        {
            f = i.first;
            maxi = f.length();
        }
    }
    
    string ans = first + f + second;
    cout<<ans.size()<<"\n"<<ans;
    // cout<<first+f+second;

    return 0;
}
