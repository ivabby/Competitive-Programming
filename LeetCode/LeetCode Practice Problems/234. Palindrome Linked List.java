class Solution {
    public boolean isPalindrome(ListNode head) {
        ArrayList<String> a = new ArrayList();
        while(head != null)
        {
            a.add(Integer.toString(head.val));
            head = head.next;
        }
        
        int i = 0 , j = a.size() - 1;
        while(i<j)
        {
            if(!a.get(i).equals(a.get(j)))
                return false;
            i++;
            j--;
        }
        
        return true;
    }
}
