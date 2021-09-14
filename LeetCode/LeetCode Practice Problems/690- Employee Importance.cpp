class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        map<int,int> m;
        
        int n = employees.size();
        for(int i=0;i<n;i++) {
            m[employees[i]->id] = i;
        }
        
        int ans = 0;
        
        queue<int> r;
        r.push(m[id]);

        while(!r.empty()) {
            int t = r.front();
            r.pop();

            ans += employees[t]->importance;
            for(auto i: employees[t]->subordinates) {
                r.push(m[i]);
            }
        }

        
        
        return ans;
    }
};
