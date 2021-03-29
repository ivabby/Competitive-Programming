class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        int a[10001] = {0};
        for(auto i : G) a[i] = 1;
        
        int cnt = 0;
        while(head!=NULL) {
            if(a[head->val]) {
                cnt++;
                head = head->next;
                while(head!=NULL && a[head->val]) {
                    head = head->next;
                }
            } else {
                head = head->next;
            }
        }
        
        return cnt;                
    }
};
