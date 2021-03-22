class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if(root) {
            q.push(root);
        }
        
        while(!q.empty()) {
            int k = q.size();
            while(k--) {
                Node* cur = q.front();
                q.pop();
                
                if(k != 0) {
                    cur->next = q.front();
                }
                
                if(cur->left != NULL) {
                    q.push(cur->left);
                }
                if(cur->right != NULL) {
                    q.push(cur->right);
                }
            }
        }
        
        return root;
    }
};
