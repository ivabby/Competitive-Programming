class Solution {
public:
    ListNode* Reverse(ListNode* head)
    {
        ListNode* current = head;
        ListNode* previous = nullptr;
        while(current)
        {
            ListNode* next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }

    ListNode* reverseKGroup(ListNode* head, int k) 
    {                 
        ListNode* previous = nullptr;
        ListNode* current = head;
        int i = 0;
        while(current != nullptr)
        {          
            ListNode* next = current->next;
            current->next = previous;
            previous = current;
            current = next;

            if(i == k - 1)
            {
                head->next = reverseKGroup(current, k);
                return previous;
            }

            i++;
        }

        // Unreverse the last few nodes
        return Reverse(previous);
    }
};
