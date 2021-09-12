class Solution{
	public:
	
	    vector<string> ans;
	    
	    void solve(string s,int n,int pos,string res) {
	        if(pos == n) {
	            ans.push_back(res);
	            return;
	        }
	        solve(s,n,pos+1,res);
	        solve(s,n,pos+1,res+s[pos]);
	    }
	    
		vector<string> AllPossibleStrings(string s){
		    int n =s.length();
		    for(int i=0;i<n;i++) {
		        string st = "";
		        st += s[i];
		        solve(s,n,i+1,st);
		    }
		    sort(ans.begin() , ans.end());
		    
		    return ans;
		}
};
