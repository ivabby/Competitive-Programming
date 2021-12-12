class CustomStack {
    int a[],sz,cur;
    
    public CustomStack(int maxSize) {
        a = new int[maxSize];
        cur = -1;
        sz = maxSize;
    }
    
    public void push(int x) {
        if(cur+1 != sz) {
            a[++cur] = x;
        }
    }
    
    public int pop() {
        if(cur == -1) {
            return -1;
        }
        int val = a[cur--];
        return val;
    }
    
    public void increment(int k, int val) {
        for(int i=0;i<=Math.min(k-1,cur);i++) {
            a[i] += val;
        }
    }
}
