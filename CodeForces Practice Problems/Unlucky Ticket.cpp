#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin() , a.end()

int main()
{
    int n;
    string s;
    cin>>n>>s;

    vector<int> a,b;
    for(int i=0;i<2*n;i++)
    {
        if(i<n) a.push_back(s[i] - '0');
        else b.push_back(s[i] - '0');
    }

    sort(all(a));
    sort(all(b));

    bool f = true , ff = true;
    for(int i=0;i<n;i++)
    {
        if(a[i] > b[i]) continue;
        f = false;
        break;
    }

    for(int i=0;i<n;i++)
    {
        if(a[i] < b[i]) continue;
        ff = false;
        break;
    }

    if(f || ff) cout<<"YES";
    else cout<<"NO";

    return 0;
}
