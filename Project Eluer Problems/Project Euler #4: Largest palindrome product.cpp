#include <bits/stdc++.h>
using namespace std;

bool palin(string s)
{
    string rev = s;
    reverse(rev.begin() , rev.end());
    if(s == rev) return true;
    return false;
}

bool check(int n)
{
    for(int i=100;i<1000;i++)
    {
        int q = n/i;
        if(n%i==0 && q>99 && q<1000)
            return true;
    }
    return false;
}

int main() {
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n--)
        {
            if(check(n) && palin(to_string(n)))
            {
                cout<<n<<"\n";
                break;
            }
        }
    }

    return 0;
}
