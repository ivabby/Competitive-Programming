class Solution {
    public boolean asteroidsDestroyed(int mass, int[] asteroids) {
        Arrays.sort(asteroids);
        for(int asteroid: asteroids) {
            if(mass < asteroid) {
                return false;
            }
            if(mass >= 100000) {
                return true;
            }
            mass += asteroid;
        }
        return true;
    }
}
