class Solution {
public:
    
    Node* connect(Node* root) {
        
        queue<Node*> q;
        if(root != NULL) {
            q.push(root);
        }
        
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
                Node* cur = q.front();
                q.pop();
                if(n > 0) {
                    cur->next = q.front();
                }
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
        }
        return root;        
    }
};
