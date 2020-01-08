class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        ListNode* temp = new ListNode(head->val);
        head = head->next;
        while(head != NULL)
        {
            ListNode* t = new ListNode(head->val);
            t->next = temp;
            temp = t;
            head = head->next;
        }
        
        return temp;
    }
};
