class Solution {
public:
    bool isPerfectSquare(int num) {
        int sq = sqrt(num);
        if(sq*sq == num)
            return true;
        return false;
    }
};
