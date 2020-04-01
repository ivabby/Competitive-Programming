#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> a;
ll factorsSum(int n)
{
    int sq = sqrt(n);
    ll sum = 1;
    if(sq*sq == n)
    {
        sum+=sq;
        sq--;
    }

    for(int i=2;i<=sq;i++)
        if(n%i == 0)
            sum+= i + (n/i);

    return sum;
}

void solve(){
    for(int i=2;i<=100000;i++)
    {
        ll factorA = factorsSum(i);
        if(factorA>i && factorA<=100000)
        {
            ll factorB = factorsSum(factorA);
            if(i == factorB)
            {
                a.push_back(i);
                a.push_back(factorA);
            }
        }
    }
}

int main() {
    solve();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll s = 0;
        for(auto i : a)
        {
            if(i<=n)
            s+=i;
        }

        cout<<s<<"\n";
    }
    return 0;
}
