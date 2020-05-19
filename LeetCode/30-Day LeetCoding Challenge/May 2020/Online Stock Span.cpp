class StockSpanner {
public:
    stack<int> s;
    vector<int> a;
    StockSpanner() {
    }
    
    int next(int price) {
        a.push_back(price);
        while(!s.empty() && a[s.top()] <= price)
            s.pop();
        
        if(s.empty())
        {
            s.push(a.size() - 1);
            return a.size();
        }
        else{
            int sz = (a.size() - 1) - s.top();
            s.push(a.size() - 1);
            return sz;
        }
    }
};
