#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == 'W' && (i+1<s.length() && s[i+1] == 'U') && (i+2<s.length() && s[i+2] == 'B'))
        {
            s = s.substr(0,i) + " " + s.substr(i+3);
            i = -1;
        }
    }
    for(int i=0;i<s.length();)
    {
        cout<<s[i];
        if(s[i] == ' ')
        while(i+1<s.length() && s[i+1] == ' ')
            i++;
        i++;
    }
}

int main()
{
    solve();
    return 0;
}
