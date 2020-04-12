class Solution {
public:
    int lastStoneWeight(vector<int>& a) {
        make_heap(a.begin() , a.end());
        
        while(a.size() > 1)
        {
            int v1 = a.front();
            pop_heap(a.begin() , a.end());
            a.pop_back();
            int v2 = a.front();
            pop_heap(a.begin() , a.end());
            a.pop_back();
            if(v1 != v2)
            {
                cout<<v1-v2;
                a.push_back(v1-v2);
                push_heap(a.begin() , a.end());
            }
            if(a.size() == 0)
                return 0;
        }
        
        return a.front();
    }
};
