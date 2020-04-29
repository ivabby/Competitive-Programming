class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> s;
        
        while(head != NULL)
        {
            if(s.find(head) != s.end())
                return head;
            s.insert(head);
            head = head->next;
        }
        
        return NULL;
    }
};
