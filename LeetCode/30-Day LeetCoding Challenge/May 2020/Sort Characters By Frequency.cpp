
// Using Custom Sorting
class Solution {
public:
    
    string frequencySort(string s) {
        map<char,int> m;
        for(char c : s)
            m[c]++;
        sort(s.begin(),s.end(),[&](const char a,const char b)
             {
                 if(m[a] != m[b])
                     return m[a] >= m[b];
                 return a>b;
             });
        return s;    
    }
};


//  Using Priority Queue
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char c : s)
            m[c]++;
        
        string ans = "";
        priority_queue<pair<int,char>> p;
        for(auto i : m)
            p.push({i.second , i.first});
        
        while(!p.empty())
        {
            auto i = p.top();
            p.pop();
            while(i.first--)
                ans += i.second;
        }
        
        return ans;
    }
};
