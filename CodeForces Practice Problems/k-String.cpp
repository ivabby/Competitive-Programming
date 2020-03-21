#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int k;
    cin>>k>>s;

    int f[26] = {0};

    for(char c : s)
        f[c - 'a']++;

    string ans = "";
    for(int i=0;i<26;i++)
        if(f[i] > 0)
        {
            if(f[i]%k != 0)
            {
                cout<<"-1";
                return;
            }
            int q = f[i]/k;
            while(q--)
                ans = ans + (char)(i + 'a');
        }
    while(k--)
        cout<<ans;
}

int main()
{
    solve();
    return 0;
}
