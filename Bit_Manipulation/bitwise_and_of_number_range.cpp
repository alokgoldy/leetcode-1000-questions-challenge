q link: https://leetcode.com/problems/bitwise-and-of-numbers-range/

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int res = 0;
        while (left < right) {
            left >>= 1;
            right >>= 1;
            res++;
        }
        return left << res;
    }
};

var rangeBitwiseAnd = function(left, right) {
    while (left < right) {
        right = right & (right - 1)
    }
    return right
};