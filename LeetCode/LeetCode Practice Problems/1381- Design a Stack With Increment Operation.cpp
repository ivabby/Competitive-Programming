class CustomStack {
public:
    int mx = 0;
    stack<int> st;
    CustomStack(int maxSize) {
        mx = maxSize;
    }
    
    void push(int x) {
        if(st.size() < mx)
            st.push(x);
    }
    
    int pop() {
        if(st.empty())
            return -1;
        
        int val = st.top();
        st.pop();
        
        return val;
    }
    
    void increment(int k, int val) {
        stack<int> s;
        
        while(!st.empty()) {
            int v = st.top();
            st.pop();
            s.push(v);
        }
        
        while(!s.empty()) {
            int v = s.top();
            if(k > 0)
                v+=val,k--;
            st.push(v);
            s.pop();
        }
        
    }
};
