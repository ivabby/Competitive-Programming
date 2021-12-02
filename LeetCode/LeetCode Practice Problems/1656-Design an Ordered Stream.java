class OrderedStream {
    
    String st[];
    int n;
    int ptr = 0;

    public OrderedStream(int n) {
        this.n = n;
        st = new String[n];
    }
    
    public List<String> insert(int idKey, String value) {
        List<String> ans = new ArrayList();
        
        st[idKey - 1] = value;
       
        for(;ptr<n;ptr++) {
            if(st[ptr] == null) break;
            ans.add(st[ptr]);
        }
        
        return ans;
    }
}
