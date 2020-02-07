class Solution {
public:
    bool judgeCircle(string moves) {
        int upDown = 0 , leftRight = 0;
        for(char c : moves)
        {
            if(c == 'U')
                upDown++;
            else if(c == 'D')
                upDown--;
            else if(c == 'L')
                leftRight++;
            else
                leftRight--;
        }
        
        return (upDown == 0)&&(leftRight == 0);
    }
};
