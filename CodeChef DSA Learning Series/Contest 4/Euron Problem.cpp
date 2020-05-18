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

int n,a[N],t[N];
ll cnt = 0;

void mergeSort(int l,int mid,int h)
{
    int i = l , j = mid + 1, k = l;

    while(i<=mid && j<=h)
    {
        if(a[i] <= a[j])
            t[k++] = a[i++];
        else{
            t[k++] = a[j++];
            cnt = cnt + (ll)(mid-i+1);
        }
    } 

    while(i<=mid)
        t[k++] = a[i++];
    
    while(j<=h)
        t[k++] = a[j++];

    for(int i=l;i<=h;i++)
        a[i] = t[i];
}

void mg(int l,int h)
{
    if(l < h)
    {
        int mid = l + (h-l)/2;
        mg(l,mid);
        mg(mid+1,h);
        mergeSort(l,mid,h);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    cin>>n;
    forr(0,n-1){    
        cin>>a[i];
        t[i] = a[i];
    }

    mg(0,n-1);
    cout<<cnt<<"\n";
    
    return 0;
}
