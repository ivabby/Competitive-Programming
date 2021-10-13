class MyHashMap {

    static class Node {
        int key;
        int value;
        Node next;
        
        public Node(int key,int value) {
            this.key = key;
            this.value = value;
            next = null;
        }
    }
    
    private int size;
    private Node node[];
    
    public MyHashMap() {
        this.size = 100;
        this.node = new Node[size];
    }
    
    public void put(int key, int value) {
        int index = key%size;
        
        if(node[index] == null) {
            node[index] = new Node(key,value);
        } else {
            Node p = node[index];
            
            while(p != null && p.key != key) {
                p = p.next;
            }
            
            if(p == null) {
                Node newNode = new Node(key,value);
                newNode.next = node[index];
                node[index] = newNode;
            }
            else {
                p.value = value;
            }
        }
    }
    
    public int get(int key) {
        int index = key%size;
        
        if(node[index] == null) {
            return -1;
        }
        else {
            Node p = node[index];
            
            while(p != null && p.key != key) {
                p = p.next;
            }
            
            return (p == null)?-1:p.value;
        }
    }
    
    public void remove(int key) {
        int index = key%size;
        
        if(node[index] == null) {
            return;
        } 
        
        if(node[index].key == key) {
            node[index] = node[index].next;
        }
        else {
            Node p = node[index];
            
            while(p.next != null && p.next.key != key) {
                p = p.next;
            }
            
            if(p.next != null) {
                p.next = p.next.next;
            }
        }
    }
}
