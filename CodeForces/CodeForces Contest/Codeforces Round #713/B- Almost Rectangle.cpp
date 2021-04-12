#include<bits/stdc++.h>
#include<stdio.h>
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
char c[410][410];
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
    while(t--) {
        int n;
        cin>>n;

        vector<pair<int,int> > p;

        forr(i,0,n) {
            forr(j,0,n) {
                cin>>c[i][j];
                if(c[i][j] == '*') p.push_back(mp(i,j));
            }
        }


        if(p[0].first != p[1].first && p[0].second != p[1].second) {
            c[p[0].first][p[1].second] = '*';
            c[p[1].first][p[0].second] = '*';
        } else {
            if(p[0].first == p[1].first) {
                int x = 0;
                if(p[0].first+1<n) {
                    x = p[0].first+1;
                } else {
                    x = p[0].first-1;
                }
                c[x][p[0].second] = '*';
                c[x][p[1].second] = '*';
            } else {
                int y = 0;
                if(p[0].second+1<n) {
                    y = p[0].second+1;
                } else {
                    y = p[0].second-1;
                }
                c[p[0].first][y] = '*';
                c[p[1].first][y] = '*';
            }
        }

        forr(i,0,n) {
            forr(j,0,n) cout<<c[i][j];
            cout<<"\n";
        }
    }

    return 0;
}
