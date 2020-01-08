/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = new ListNode(0);
        ListNode* t = temp;
        
        while(head != NULL)
        {
            int v = head->val;
            head = head->next;
            bool flag = false;
            while(head!=NULL && head->val==v)
            {
                head = head->next;
                flag = true;
            }
            
            if(!flag)
            {
                t->next = new ListNode(v);
                t = t->next;
            }
            
        }
        
        return temp->next;
    }
};
