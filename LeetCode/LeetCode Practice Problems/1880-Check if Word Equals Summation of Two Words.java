class Solution {
    
    public int findSum(String word) {
        int s = 0;
        for(char c: word.toCharArray()) {
            s = s*10 + (c - 'a');
        }
        return s;
    }
    
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
        int num1 = findSum(firstWord);
        int num2 = findSum(secondWord);
        int sum = findSum(targetWord);
        
        return num1 + num2 == sum;
    }
}
