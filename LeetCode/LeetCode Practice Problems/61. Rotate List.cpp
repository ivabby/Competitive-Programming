class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;
        ListNode* temp = head , *last;
        int c = 0;
        while(temp!=NULL)
        {
            if(temp->next == NULL) last = temp;
            temp = temp->next;
            c++;
        }
        
        k = k%c;
        if(k == 0) return head;
        
        temp = head;
        while(c != k+1)
        {
            temp = temp->next;
            c--;
        }
        
        ListNode *res = temp->next;
        last->next = head;
        temp->next = NULL;
        
        return res;
    }
};
