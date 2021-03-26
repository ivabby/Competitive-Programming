class OrderedStream {
public:
    
    int id = 1;
    map<int,string> m;
    
    OrderedStream(int n) {
        
    }
    
    vector<string> insert(int idKey, string value) {
        m[idKey] = value;
        vector<string> ans;
        
        while(m.find(id) != m.end()) {
            ans.push_back(m[id]);
            id++;
        }
        
        return ans;        
    }
};
