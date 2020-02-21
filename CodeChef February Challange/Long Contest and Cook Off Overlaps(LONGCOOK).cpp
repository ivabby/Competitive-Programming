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
long long ans = 0;
int t,m1,m2,year1,year2;
ll c1 = 0;
vector<int> a,b;
set<int> s1,s2;
ll check(){
    if(year1<=3 && year2>=3) ans++;
    if(year1<=9 && year2>=9) ans++;
    if(year1<=14 && year2>=14) ans++;
    if(year1<=15 && year2>=15) ans++;
    if(year1<=20 && year2>=20) ans++;
    if(year1<=25 && year2>=25) ans++;
    if(year1<=26 && year2>=26) ans++;
    if(year1<=31 && year2>=31) ans++;
    if(year1<=37 && year2>=37) ans++;
    if(year1<=42 && year2>=42) ans++;
    if(year1<=43 && year2>=43) ans++;
    if(year1<=48 && year2>=48) ans++;
    if(year1<=53 && year2>=53) ans++;
    if(year1<=54 && year2>=54) ans++;
    if(year1<=59 && year2>=59) ans++;
    if(year1<=65 && year2>=65) ans++;
    if(year1<=70 && year2>=70) ans++;
    if(year1<=71 && year2>=71) ans++;
    if(year1<=76 && year2>=76) ans++;
    if(year1<=81 && year2>=81) ans++;
    if(year1<=82 && year2>=82) ans++;
    if(year1<=87 && year2>=87) ans++;
    if(year1<=93 && year2>=93) ans++;
    if(year1<=98 && year2>=98) ans++;
    if(year1<=99 && year2>=99) ans++;
}
void ok(){
    if(year1 > 100)
    {
        int q = (year1 - 100) / 400;
        ll v = q*400;
        ll leftYear = year1 - v;
        ans = q*a.size();
        ll rem = lower_bound(a.begin() , a.end() , leftYear) - a.begin();
        ans = ans + rem;
    }
    if(year2 > 100)
    {
        int q = (year2 - 100) / 400;
        ll v = q*400;
        ll leftYear = year2 - v;
        ans = q*a.size() - ans;
        ll rem = lower_bound(a.begin() , a.end() , leftYear) - a.begin();
        ans = ans + rem;
        if(s1.find(leftYear) != s1.end()) ans++;
    }
    check();
    cout<<ans<<"\n";    
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    // freopen("out.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    set<int> s;
    int date = 5;
    for(int i=1;i<100;i++)
    {
        if(i%400 == 0 || (i%4 == 0 && i%100!=0))
        {
            if(date == 0)
            {
                s2.insert(i);
                b.pb(i);
            }
            date+=2;
        }
        else
        {
            if(date == 0 || date == 1)
            {
                s2.insert(i);
                b.pb(i);
            }
            date++;
        }
        date = date%7;
    }
    date = 2;
    for(int i=100;i<=500;i++)
    {
        if(i%400 == 0 || (i%4 == 0 && i%100!=0))
        {
            if(date == 0){
                s1.insert(i);
                a.pb(i);
            }
            date+=2;
        }
        else
        {
            if(date == 0 || date == 1){
                s1.insert(i);
                a.pb(i);
            }
            date++;
        }
        date = date%7;
    }
    cin>>t;
    while(t--)
    {
        ans = 0;
        cin>>m1>>year1>>m2>>year2;
        if(m1 > 2)
            year1++;
        if(m2 < 2)
            year2--;
        ok();
    }
    return 0;
}
