class Solution {
    public boolean wordPattern(String pattern, String s) {
        String st[] = s.split(" ");

        if(pattern.length() != st.length)
            return false;

        Map<Character,String> keyToValue = new HashMap();
        Map<String,Character> valueToKey = new HashMap();
        for(int i=0;i<st.length;i++) {
            char ch = pattern.charAt(i);
            String cur = st[i];

            if(!keyToValue.containsKey(ch) && !valueToKey.containsKey(cur)) {
                keyToValue.put(ch , cur);
                valueToKey.put(cur , ch);
            }
            else {
                if(!keyToValue.containsKey(ch) || !valueToKey.containsKey(cur))
                    return false;
                if(!keyToValue.get(ch).equals(cur) || !valueToKey.get(cur).equals(ch))
                    return false;
            }
        }
        return true;
    }
}
