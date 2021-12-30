class MinStack {
    static class Node {
        int val,mn;
        Node next;
        Node(int val,int mn) {
            this.val = val;
            this.mn = mn;
            this.next = null;
        }
    }
    Node head;  
    public MinStack() {
        head = null;
    }
    public void push(int val) {
        if(head == null) {
            head = new Node(val,val);
        }
        else {
            int curMin = head.mn;
            Node node = new Node(val , Math.min(val , curMin));
            node.next = head;
            head = node;
        }
    }
    public void pop() {
        head = head.next;
    }
    public int top() {
        return head.val;
    }
    public int getMin() {
        return head.mn;
    }
}
