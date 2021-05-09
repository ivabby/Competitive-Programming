class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        map<int,int> m;
        
        for(int i=0;i<pieces.size();i++) {
            m[pieces[i][0]] = i;
        }
        int n = arr.size() , i = 0;
        
        while(i < n) {
            
            if(m.find(arr[i]) == m.end()) {
                return false;
            }
            
            int pos = m[arr[i]];
            int sz = pieces[pos].size() - 1;
            int j = 1;
            while(sz > 0) {
                sz--;
                
                if(pieces[pos][j] != arr[i+1]) {
                    return false;
                }
                
                i++,j++;
            }
            
            i++;
        }
        
        
        return i == n;
    }
};
