class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> a,b;
        
        while(head != NULL)
        {
            int v = head->val;
            if(v < x)
                b.push_back(v);
            else
                a.push_back(head->val);
            head = head->next;
        }
        
        head = new ListNode(1);
        ListNode* t = head;
        for(auto i : b)
        {
            t->next = new ListNode(i);
            t = t->next;
        }
        
        for(auto i : a)
        {
            t->next = new ListNode(i);
            t = t->next;
        }
        
        return head->next;
    }
};
