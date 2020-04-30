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
    
    int n,m;
    cin>>n>>m;
    map<string,string> chef;

    forr(1,n)
    {
        string x,y;
        cin>>x>>y;
        chef[x] = y;
    }

    map<string,int> vote;
    map<string,int> c;
    while(m--)
    {
        string x;
        cin>>x;
        vote[x]++;
        c[chef[x]]++;
    }

    ll cnt = 0;
    string name = "" , country = "";



    for(auto i : vote)
    {
        if(i.second > cnt)
        {
            name = i.first;
            cnt = i.second;
            country = chef[i.first];
        }
        else if(i.second == cnt)
        {
            if(i.first < name)
                name = i.first;
        }
    }

    cnt = 0;
    country = "";
    for(auto i : c)
    {
        if(i.second > cnt)
        {
            cnt = i.second;
            country = i.first;
        }
        else if(i.second == cnt && country > i.first)
        {
            country = i.first;
        }
    }

    cout<<country<<"\n"<<name<<"\n";
    return 0;
}
