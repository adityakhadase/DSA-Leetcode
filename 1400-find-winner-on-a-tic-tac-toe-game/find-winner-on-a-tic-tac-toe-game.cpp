class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        char board[3][3];
        for(int i=0;i<moves.size();i++){
        int row = moves[i][0];
        int col = moves[i][1];
        if (i % 2 == 0)
        board[row][col] = 'X';
        else
        board[row][col] = 'O';
        }
        if(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X'){
            return "A";
        }
        if(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'){
            return"B";
        }
        if(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X'){
            return "A";
        }
        if(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O'){
            return"B";
        }
        if(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X'){
            return "A";
        }
        if(board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O'){
            return"B";
        }
        if(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X'){
            return "A";
        }
        if(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O'){
            return "B";
        }
        if(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X'){
            return "A";
        }
        if(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O'){
            return "B";
        }
        if(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X'){
            return "A";
        }
        if(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O'){
            return"B";
        }
        if(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X'){
            return "A";
        }
        if(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O'){
            return "B";
        }
        if(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X'){
            return "A";
        }
        if(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O'){
            return "B";
        }
        if(moves.size()==9)
         return "Draw";
        return "Pending";
    }
};