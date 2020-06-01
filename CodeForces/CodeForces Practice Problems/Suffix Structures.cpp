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
    
    string a,b;
    cin>>a>>b;

    int n1 = a.length() , n2 = b.length();
    if(n2 > n1)
    {
        cout<<"need tree\n";
        return 0;
    }

    int f1[26] , f2[26];
    forr(0,25)
        f1[i] = 0 , f2[i] = 0;

    for(char c : a)
        f1[c - 'a']++;
    
    for(char c : b)
        f2[c - 'a']++;

    for(int i=0;i<26;i++)
    {
        if(f2[i] > f1[i])
        {
            cout<<"need tree\n";
            return 0;
        }
    }

    int j = 0;
    for(int i=0;i<n1 && j<n2;i++)
    {
        if(a[i] == b[j])
            j++;
    }
    
    if(j == n2)
    {
        cout<<"automaton";
    }
    else if(n1 > n2)
    {
        cout<<"both";
    }
    else
        cout<<"array";

    return 0;
}
