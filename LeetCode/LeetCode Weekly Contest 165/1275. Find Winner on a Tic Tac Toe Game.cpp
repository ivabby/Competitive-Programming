class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        string a[3][3];
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++) a[i][j] = "";
        for(int i=0;i<moves.size();i++)
        {
            int m = moves[i][0];
            int n = moves[i][1];
            if(i%2 == 0)
            {
                a[m][n] = "A";
            }
            else
            {
                a[m][n] = "B";
            }
        }
        
        //  Check for row
        for(int i=0;i<3;i++)
        {
            if(a[i][0] == a[i][1] && a[i][0] == a[i][2] && a[i][0] != "")
                return a[i][0];
            if(a[0][i] == a[1][i] && a[0][i] == a[2][i] && a[0][i] != "")
                return a[0][i];
        }
        if(a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] != "")
            return a[0][0];
        if(a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] != "")
            return a[1][1];
        if(moves.size() == 9) return "Draw";
        return "Pending";
    }
};
