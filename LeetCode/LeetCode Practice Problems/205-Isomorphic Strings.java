class Solution {
    public boolean isIsomorphic(String s, String t) {
        Map<Character,Character> m1 = new HashMap();
        Map<Character,Character> m2 = new HashMap();
        for(int i=0;i<s.length();i++) {
            char ch1 = s.charAt(i);
            char ch2 = t.charAt(i);
            if((m2.containsKey(ch2) && m2.get(ch2) != ch1) || (m1.containsKey(ch1) && m1.get(ch1) != ch2)) {
                return false;
            }
            m1.put(ch1 , ch2);
            m2.put(ch2 , ch1);
        }
        return true;
    }
}
