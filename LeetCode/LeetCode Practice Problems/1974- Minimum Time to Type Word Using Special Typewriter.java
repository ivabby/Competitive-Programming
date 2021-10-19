class Solution {
    
    int findMove(int cur,int target) {
        int ans = 0;
        while(cur != target) {
            ans++;
            cur = (cur + 1)%26;
        }
        return ans;
    }
    
    public int minTimeToType(String word) {
        int pos = 0;
        int ans = 0;
        
        for(int i=0;i<word.length();i++) {
            char ch = word.charAt(i);
            
            int currentPos = ch - 'a';
            //  X -> Clockwise , Y -> Coutner Clockwise
            int x = 0 , y = 0;
            
            x = findMove(pos , currentPos);
            y = 26 - x;
            
            ans += Math.min(x,y) + 1;
            pos = currentPos;
        }
        
        return ans;
    }
}
