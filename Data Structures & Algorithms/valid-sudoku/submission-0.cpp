class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> blockSet1;
        unordered_set<char> blockSet2;
        unordered_set<char> blockSet3;
        unordered_set<char> blockSet4;
        unordered_set<char> blockSet5;
        unordered_set<char> blockSet6;
        unordered_set<char> blockSet7;
        unordered_set<char> blockSet8;
        unordered_set<char> blockSet9;
        for(int i=0;i<9;i++){
            unordered_set<char> rowSet;
            unordered_set<char> columnSet;
            for(int j=0;j<9;j++){
                cout<<"i: "<<i<<" j: "<<j<<endl;
                if(board[i][j]!='.'){
                    if(rowSet.count(board[i][j])){
                        cout<<"Returning false from rowSet";
                        return false;
                    }
                    rowSet.insert(board[i][j]);
                }
                if(board[j][i]!='.'){
                    if(columnSet.count(board[j][i])){
                        cout<<"Returning false from columnSet";
                        return false;
                    }
                    columnSet.insert(board[j][i]);
                }
                if(board[i][j]!='.' && i<=2 && j<=2){
                    if(blockSet1.count(board[i][j])){
                        cout<<"Returning false from blockSet1";
                        return false;
                    }
                    blockSet1.insert(board[i][j]);
                }
                if(board[i][j]!='.' && i>=3 && i<=5 && j<=2){
                    if(blockSet2.count(board[i][j])){
                        cout<<"Returning false from blockSet2";
                        return false;
                    }
                    blockSet2.insert(board[i][j]);
                }
                if(board[i][j]!='.' && i>=6 && i<=8 && j<=2){
                    if(blockSet3.count(board[i][j])){
                        cout<<"Returning false from blockSet3";
                        return false;
                    }
                    blockSet3.insert(board[i][j]);
                }

                if(board[i][j]!='.' && i<=2 && j>=3 && j<=5){
                    if(blockSet4.count(board[i][j])){
                        cout<<"Returning false from blockSet4";
                        return false;
                    }
                    blockSet4.insert(board[i][j]);
                }

                if(board[i][j]!='.' && i>=3 && i<=5 && j>=3 && j<=5){
                    if(blockSet5.count(board[i][j])){
                        cout<<"Returning false from blockSet5";
                        return false;
                    }
                    blockSet5.insert(board[i][j]);
                }

                if(board[i][j]!='.' && i>=6 && i<=8 && j>=3 && j<=5){
                    if(blockSet6.count(board[i][j])){
                        cout<<"Returning false from blockSet6";
                        return false;
                    }
                    blockSet6.insert(board[i][j]);
                }

                if(board[i][j]!='.' && i<=2 && j>=6 && j<=8){
                    if(blockSet7.count(board[i][j])){
                        cout<<"Returning false from blockSet7";
                        return false;
                    }
                    blockSet7.insert(board[i][j]);
                }

                if(board[i][j]!='.' && i>=3 && i<=5 && j>=6 && j<=8){
                    if(blockSet8.count(board[i][j])){
                        cout<<"Returning false from blockSet8";
                        return false;
                    }
                    blockSet8.insert(board[i][j]);
                }

                if(board[i][j]!='.' && i>=6 && i<=8 && j>=6 && j<=8){
                    if(blockSet9.count(board[i][j])){
                        cout<<"Returning false from blockSet9";
                        return false;
                    }
                    blockSet9.insert(board[i][j]);
                }
            }
        }
        return true;
    }
};
