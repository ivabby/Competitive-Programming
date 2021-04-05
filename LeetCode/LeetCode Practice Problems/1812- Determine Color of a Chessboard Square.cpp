class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int row = coordinates[0] - 'a';
        int col = coordinates[1] - '0';
        if(row%2 == 0) {
            return col%2 == 0;
        } else {
            return col%2 == 1;
        }
    }
};
