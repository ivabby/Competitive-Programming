class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* rev = new ListNode(1);
        ListNode* t;
        ListNode* a = rev;
        
        int pos = 0;
        while(head != NULL)
        {
            pos++;
            if(pos>=m && pos<=n)
            {
                if(pos == m)
                    t = new ListNode(head->val);
                else
                {
                    ListNode* temp = new ListNode(head->val);
                    temp->next = t;
                    t = temp;
                }
                
                if(pos == n)
                {
                    a->next = t;
                    while(a->next != NULL)
                        a = a->next;
                }
            }
            else
            {
                a->next = new ListNode(head->val);
                a = a->next;
            }
            head = head->next;
        }
        
        return rev->next;
    }
};
