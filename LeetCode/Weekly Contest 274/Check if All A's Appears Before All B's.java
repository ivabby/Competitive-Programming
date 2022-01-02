class Solution {
    public boolean checkString(String s) {
        boolean foundA = false , foundB = false;
        for(char c: s.toCharArray()) {
            if(c == 'a') {
                if(foundB) 
                    return false;
                foundA = true;
            } else {
                foundB = true;
            }
        }
        
        return true;
    }
}
