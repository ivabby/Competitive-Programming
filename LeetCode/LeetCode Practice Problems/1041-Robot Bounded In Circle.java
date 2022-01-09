class Solution {
    public boolean isRobotBounded(String instructions) {
        int x = 0 , y = 0 , i = 0 , d[][] = {{0,1},{1,0},{0,-1},{-1,0}};
        for(char instruction:instructions.toCharArray()) {
            if(instruction == 'R') {
                i = (i + 1)%4;
            } 
            else if(instruction == 'L') {
                i = (i + 3)%4;
            } 
            else {
                x += d[i][0];
                y += d[i][1];
            }
        }
        return (x == 0 && y == 0) || i > 0;
    }
}
