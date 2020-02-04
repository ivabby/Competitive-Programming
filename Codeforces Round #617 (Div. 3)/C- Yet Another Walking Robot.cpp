#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
	  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        map<pair<int,int> , int> m;
        pair<int,int> ans;
        int mini = INT_MAX;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x = 0 , y = 0;
        m[mp(0,0)] = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'L')
                x--;
            else if(s[i] == 'R')
                x++;
            else if(s[i] == 'U')
                y++;
            else
                y--;
            pair<int,int> p = mp(x,y);
            if(m.find(p) == m.end())
            {
                m[p] = i+1;
            }
            else
            {
                int prev = m[p];
                int current = i+1;
                if(current - prev < mini)
                {
                    ans = mp(m[p] + 1 , i+1);
                    mini = current - prev;
                }
                m[p] = i+1;
            }
        }

        if(mini == INT_MAX)
            cout<<"-1\n";
        else
            cout<<ans.first<<" "<<ans.second<<"\n";
    }
    
    return 0;
}
