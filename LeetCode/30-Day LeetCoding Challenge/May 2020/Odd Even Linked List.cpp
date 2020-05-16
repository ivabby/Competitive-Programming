class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return head;
        
        ListNode* r = new ListNode(head->val);
        head = head->next;
        ListNode *even = r , *odd = r;
        bool f = true;
        
        while(head != NULL)
        {
            if(f)
            {
                ListNode* t = new ListNode(head->val);
                even->next = t;
                even = even->next;
            }
            else {
                ListNode* t = new ListNode(head->val);   
                t->next = odd->next;
                odd->next = t;
                odd = odd->next;
            }
            f = !f;
            head = head->next;
        }
        
        return r;
    }
};
