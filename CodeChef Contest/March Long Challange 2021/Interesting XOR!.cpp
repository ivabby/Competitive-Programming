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
const int INF=1e9+7;
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

string decimalToBinary(int n) 
{ 
    //finding the binary form of the number and  
    //coneverting it to string.  
    string s = bitset<128> (n).to_string(); 
      
    //Finding the first occurance of "1" 
    //to strip off the leading zeroes. 
    const auto loc1 = s.find('1'); 
      
    if(loc1 != string::npos) 
        return s.substr(loc1); 
      
    return "0"; 
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output2.txt" , "w" , stdout);    
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);  
    
    ll t,a;
    cin>>t;
    while(t--) {
        cin>>a;

        if(a == 1) {
            cout<<"0\n";
            continue;
        }

        bool flag = true;
        string binary = decimalToBinary(a);

        string s = "";

        forr(i,0,binary.length()-1) {
            s += "1";
        }

        ll val = stoi(s , nullptr , 2);
        ll mx = val * (a ^ val);
        // cout<<val<<" "<<(a^val)<<"\n";
        cout<<mx<<"\n";

    }
    
    return 0;
}
