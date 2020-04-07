#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	vector<char> a;
	for(char i='a';i<='m';i++)
		a.push_back(i);

	ll n;
	cin>>n;
    vector<int> pos;
	for(int i=1;i<=13;i++)
	{
		int v = n%i;
		n/=i;

        pos.insert(pos.begin() , v);
	}

    for(int i : pos)
    {
        cout<<a[i];
        vector<char> b;
        for(int j=0;j<a.size();j++)
            if(i != j)
                b.push_back(a[j]);

        a = b;
    }

    cout<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
