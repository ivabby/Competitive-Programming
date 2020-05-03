class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s,mini;
    MinStack() {
        
    }
    
    void push(int x) {
        s.push(x);
        int val = x;
        if(!mini.empty() && mini.top() < val)
            val = mini.top();
        mini.push(val);
    }
    
    void pop() {
        s.pop();
        mini.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
