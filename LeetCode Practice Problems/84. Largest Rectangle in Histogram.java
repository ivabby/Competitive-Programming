class Solution {
    public int largestRectangleArea(int[] h) {
        Stack<Integer> s = new Stack<Integer>();
        int n = h.length;
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && h[s.peek()] > h[i])
            {
                int pos = s.pop(); 
                int w = (s.empty())?i:i-s.peek() - 1;
                maxi = Math.max(maxi , w * h[pos]);
            }
            
            s.push(i);
        }
        
        while(!s.empty())
        {
            int pos = s.pop();
            int w = (s.empty())?n:n-s.peek() - 1;
            maxi = Math.max(maxi , w * h[pos]);
        }
        
        return maxi;
    }
}
