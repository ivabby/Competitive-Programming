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
    
    int n,a,h;
    deque<int> s1,s2;

    cin>>n;
    cin>>h;

    forr(i,0,h)
    {
        cin>>a;
        s1.push_back(a);
    }

    cin>>h;
    forr(i,0,h)
    {
        cin>>a;
        s2.push_back(a);
    }

    set<deque<int>> s;
    int turns = 0;

    while(!s1.empty() && !s2.empty())
    {
        turns++;

        if(s.find(s1) != s.end() && s.find(s2) != s.end())
        {
            cout<<"-1";
            return 0;
        }

        s.insert(s1);
        s.insert(s2);

        int tp1 = s1.front();
        int tp2 = s2.front();

        s1.pop_front();
        s2.pop_front();

        if(tp1 > tp2){
            s1.push_back(tp2);
            s1.push_back(tp1);
        } else {
            s2.push_back(tp1);
            s2.push_back(tp2);
        }
    }

    cout<<turns<<" ";
    if(s1.empty()) cout<<"2";
    else cout<<"1";

    return 0;
}
