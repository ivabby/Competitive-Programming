/*
// Definition for a Node.
class Node {
    public int val;
    public Node prev;
    public Node next;
    public Node child;
};
*/

class Solution {
    public Node flatten(Node head) {
        if(head == null) return null;
        
        Node tmp = new Node();
        tmp.val = head.val;
        tmp.next = null;
        tmp.child = null;
        
        if(head.child != null) {
            tmp.next = flatten(head.child);
        }
        
        Node t = tmp;
        while(t.next != null) {
            t.next.prev = t;
            t = t.next;
        }
        
        if(head.next != null) {
            t.next = flatten(head.next);
            t.next.prev = t;
        }
        
        
        return tmp;
    }
}
