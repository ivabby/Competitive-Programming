class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* temp = new ListNode(1);
        ListNode* cur = temp;
        
        while(head != NULL) {
            
            if(head->val != val) {
                ListNode* t = new ListNode(head->val);
                cur->next = t;
                cur = t;
            }
            
            head = head->next;            
        }
        
        temp = temp->next;
        
        return temp;
        
    }
};
