class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* t1 = head;
        ListNode* start = NULL;
        ListNode* end = NULL;
        int pos = k;
        
        while(pos--) {
            start = t1;
            t1 = t1->next;
        }
        
        pos = k;
        t1 = head;
        int sz = 0;
        
        while(t1 != NULL) {
            t1 = t1->next;
            sz++;
        }
        
        pos = sz - k;
        t1 = head;
        while(pos--) {
            t1 = t1->next;
        }
        
        swap(t1->val , start->val);
        return head;
        
    }
};
