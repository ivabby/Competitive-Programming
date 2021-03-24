class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1 = 0;
        int n2 = 0;
        
        ListNode* t = headA;
        while(t != NULL) {
            n1++;
            t = t->next;
        }
        
        t = headB;
        while(t != NULL) {
            n2++;
            t = t->next;
        }
        
        while(n1 != n2 && headA!=NULL && headB!=NULL) {
            if(n1 > n2) {
                n1--;
                headA = headA->next;
            } else {
                n2--;
                headB = headB->next;
            }
        }
        
        while(headA != NULL && headB != NULL) {
            if(headA == headB) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        
        return NULL;
    }
};
