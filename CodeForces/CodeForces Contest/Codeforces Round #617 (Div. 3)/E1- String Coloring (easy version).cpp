#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    string ans = "";
    char l0 = 'a' , l1 = 'a';
    for(int i=0;i<n;i++)
    {
        if(s[i] >= l0)
        {
            l0 = s[i];
            ans+="0";
        }
        else if(s[i] >= l1)
        {
            l1 = s[i];
            ans+="1";
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES\n";
    cout<<ans;
    return 0;
}
