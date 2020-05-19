class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        
        if(root == NULL)
            return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            queue<Node*> t;
            vector<int> a;
            while(!q.empty())
            {
                Node* n = q.front();
                q.pop();
                a.push_back(n->val);
                
                for(auto i : n->children)
                    t.push(i);
            }
            ans.push_back(a);
            q = t;
        }
        
        return ans;
    }
};
