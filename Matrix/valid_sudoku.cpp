q link: https://leetcode.com/problems/valid-sudoku/


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> boxes[9];

        for(int i = 0; i< 9; i++){
            for(int j = 0; j< 9; j++){

                int n = board[i][j];
                if(n == '.'){
                    continue;
                }
                int bIdx = (i/3 * 3) + j/3;

                if(row[i].count(n) || col[j].count(n) || boxes[bIdx].count(n)){
                    return false;
                }

                row[i].insert(n);
                col[j].insert(n);
                boxes[bIdx].insert(n);
            }
        }
        return true;
    }
};

var isValidSudoku = function(board) {
    let row = new Array(9).fill(0);
    let col = new Array(9).fill(0);
    let box = new Array(9).fill(0);

    for(let i = 0; i< 9; i++){
        for(let j = 0; j< 9; j++){
            if (board[i][j] === '.') continue;
            let n = board[i][j] - '1';
           
            let bIdx = (Math.floor(i/3) * 3) + Math.floor(j/3);

            if((row[i] & (1 << n)) || (col[j] & (1 << n)) || (box[bIdx] & (1 << n))){
                return false;
            }

            row[i] |= (1 << n);
            col[j] |= (1 << n);
            box[bIdx] |= (1 << n);
        }
    }
    return true;
};


