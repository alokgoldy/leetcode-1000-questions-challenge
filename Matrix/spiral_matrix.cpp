q link - https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};
        int rB = 0;
        int rE = matrix.size() - 1;
        int cB = 0;
        int cE = matrix[0].size() - 1;

        vector<int> res;
        while(cB <= cE && rB <= rE){

            for(int j=cB; j<=cE; j++){
                res.push_back(matrix[rB][j]);
            }
            rB++;

            for(int j=rB; j<=rE; j++){
                res.push_back(matrix[j][cE]);
            }
            cE--;

            if(rB<=rE){
                for(int j=cE; j>=cB; j--){
                res.push_back(matrix[rE][j]);
               }
            rE--;
            }
            

            if(cB<=cE){
                for(int j=rE; j>=rB; j--){
                res.push_back(matrix[j][cB]);
            }
            cB++;
            }
        }
        return res;
    }
};

var spiralOrder = function(matrix) {
    if (matrix.length === 0 || matrix[0].length === 0) return [];
    let rB = 0;
    let rE = matrix.length - 1;
    let cB = 0;
    let cE = matrix[0].length - 1;
    let res = [];
    while (cB <= cE && rB <= rE) {
        for (let j = cB; j <= cE; j++) {
            res.push(matrix[rB][j]);
        }
        rB++;
        for (let j = rB; j <= rE; j++) {
            res.push(matrix[j][cE]);
        }
        cE--;
        if (rB <= rE) {
            for (let j = cE; j >= cB; j--) {
                res.push(matrix[rE][j]);
            }
            rE--;
        }
        if (cB <= cE) {