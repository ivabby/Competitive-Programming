class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* m = list1 , *n = list1;
        for(int i=0;i<a-1;i++) m = m->next;
        for(int i=0;i<b;i++) n = n->next;
        
        m->next = list2;
        while(list2->next != NULL) {
            list2 = list2->next;
        }
        
        list2->next = n->next;
        
        return list1;
    }
};
