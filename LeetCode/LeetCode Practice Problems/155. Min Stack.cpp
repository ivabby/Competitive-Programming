class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    MinStack() {
    }
    
    void push(int x) {
        s.push(x);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        int mini = INT_MAX;
        stack<int> st;
        while(!s.empty())
        {
            mini = min(mini , s.top());
            st.push(s.top());
            s.pop();
        }
        
        while(!st.empty())
        {
            s.push(st.top());
            st.pop();
        }
        return mini;
    }
};
