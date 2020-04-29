class Solution {
    public boolean rotateString(String A, String B) {
        if(A.isEmpty() && B.isEmpty()) return true;
        
        int n = A.length();
        for(int i=0;i<n;i++)
        {
            String s = B.substring(i) + B.substring(0,i);
            if(s.equals(A)) return true;
        }
        
        return false;
    }
}
