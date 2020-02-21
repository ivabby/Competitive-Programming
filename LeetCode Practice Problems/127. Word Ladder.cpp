#include<bits/stdc++.h>
class Solution {
public:
    vector<string> nextWord(string s)
    {
        int n = s.length();
        vector<string> v;
        for(int i=0;i<n;i++)
        {
            char ch = s[i];
            for(int j=0;j<26;j++)
            {
                char c = (char)(j+'a');
                if(c == ch) continue;
                s[i] = c;
                string ss = s;
                v.push_back(ss);
            }
            s[i] = ch;
        }
        return v;
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();
        map<string , bool> vis;
        set<string> sets;
        for(auto i : wordList)
        {
            sets.insert(i);
            vis[i] = false;
        }
        
        int cnt = 0;
        
        queue<string> q;
        q.push(beginWord);
        while(!q.empty())
        {
            queue<string> t;
            cnt++;
            while(!q.empty())
            {
                if(q.front() == endWord) return cnt;
                vector<string> s = nextWord(q.front());
                q.pop();
                
                for(auto i : s)
                    if(sets.find(i) != sets.end() && !vis[i])
                    {
                        vis[i] = true;
                        t.push(i);
                    }
            }
            q = t;
        }
        
        return 0;
    }
};
