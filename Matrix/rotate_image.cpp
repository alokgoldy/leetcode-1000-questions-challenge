q link - https://leetcode.com/problems/rotate-image/description/

/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var rotate = function(matrix) {
    let top = 0;
    let bottom = matrix.length - 1;

    while(top < bottom){
        for(let j = 0; j< matrix[0].length; j++){
            const temp = matrix[top][j];
            matrix[top][j] = matrix[bottom][j];
            matrix[bottom][j] = temp;
        }
        top++;
        bottom--;
    }

    const ed = matrix.length;

    for(let i =0; i<ed; i++){
        for(let j = i+1; j<ed; j++){
            const temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    return matrix;
};


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int top = 0;
        int bottom = matrix.size() - 1;

        while(top < bottom){
            for(int j = 0; j< matrix[0].size(); j++){
                int temp = matrix[top][j];
                matrix[top][j] = matrix[bottom][j];
                matrix[bottom][j] = temp;
            }
            top++;
            bottom--;
        }

        int ed = matrix.size();

        for(int i =0; i<ed; i++){
            for(int j = i+1; j<ed; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
};