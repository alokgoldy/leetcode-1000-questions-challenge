q link: https://leetcode.com/problems/zigzag-conversion/

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currentRow] += c;

            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }

            currentRow += goingDown ? 1 : -1;
        }

        string result;
        for (string row : rows) {
            result += row;
        }

        return result;
    }
};

var convert = function(s, numRows) {
    if (numRows == 1) {
        return s;
    }

    let rows = new Array(numRows).fill('');
    let currentRow = 0;
    let goingDown = false;

    for (let c of s) {
        rows[currentRow] += c;

        if (currentRow == 0 || currentRow == numRows - 1) {
            goingDown = !goingDown;
        }

        currentRow += goingDown ? 1 : -1;
    }

    let result = '';
    for (let row of rows) {
        result += row;
    }

    return result;
};
