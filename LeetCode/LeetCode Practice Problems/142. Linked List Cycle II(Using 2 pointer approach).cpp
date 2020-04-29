class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return NULL;
        
        ListNode* slow = head->next;
        ListNode* fast = head->next->next;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            if(slow == fast)
                break;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(slow != fast)
            return NULL;
        
        slow = head;
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
};
