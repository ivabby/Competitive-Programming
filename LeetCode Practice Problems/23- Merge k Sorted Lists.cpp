class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> a;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* t = lists[i];
            while(t!=NULL)
            {
                a.push_back(t->val);
                t = t->next;
            }
        }
        
        sort(a.begin() , a.end());
        ListNode* head = new ListNode(0);
        ListNode* t = head;
        for(auto i : a)
        {
            t->next = new ListNode(i);
            t = t->next;
        }
        
        return head->next;
    }
};
