class Solution {
    public String removeDuplicates(String s) {
        int i = 0 , n = s.length();
        char res[] = s.toCharArray();
        
        for(int j=0;j<n;j++,i++) {
            res[i] = res[j];
            if(i > 0 && res[i] == res[i-1]) 
                i -= 2;
        }
        
        return new String(res, 0,i);
    }
}
