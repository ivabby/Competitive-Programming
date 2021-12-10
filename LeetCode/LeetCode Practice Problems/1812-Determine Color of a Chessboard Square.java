class Solution {
    public boolean squareIsWhite(String coordinates) {
        int r = coordinates.charAt(0) - 'a';
        int c = coordinates.charAt(1) - '0';
        
        return (r%2 == c%2);
    }
}
