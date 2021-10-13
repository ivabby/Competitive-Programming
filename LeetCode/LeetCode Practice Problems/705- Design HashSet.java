class MyHashSet {

    static class Node {
        int value;
        Node next;
        
        public Node(int value) {
            this.value = value;
        }
    }
    
    private int size;
    private Node[] node;
    
    public MyHashSet() {
        this.size = 100;
        this.node = new Node[100];
    }
    
    public void add(int key) {
        //  Key already present
        if(contains(key)) return;
        
        int index = key%this.size;
        if(this.node[index] == null) {
            this.node[index] = new Node(key);
        }
        else {
            Node newNode = new Node(key);
            newNode.next = this.node[index];
            this.node[index] = newNode;
        }
    }
    
    public void remove(int key) {
        //  Key not present
        if(!contains(key)) return;
        
        int index = key%this.size;
        
        if(this.node[index].value == key) {
            this.node[index] = this.node[index].next;
        }
        else {
            
            Node p = this.node[index];
            while(p.next != null && p.next.value != key) {
                p = p.next;
            }

            if(p.next != null) {
                p.next = p.next.next;
            }
        }
    }
    
    public boolean contains(int key) {
        int index = key%this.size;
        if(this.node[index] == null) {
            return false;
        }
        else {
            Node p = this.node[index];
            
            while(p != null && p.value != key) {
                p = p.next;
            }
            
            return (p == null)?false:true;
        }
    }
}
