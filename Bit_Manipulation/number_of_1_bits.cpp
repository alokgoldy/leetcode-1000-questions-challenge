q link: https://leetcode.com/problems/number-of-1-bits/

    class Solution {
    public:
        int hammingWeight(uint32_t n) {
            int res = 0;
            while (n) {
                res++;
                n &= n - 1;
            }
            return res;
        }
    };


    var hammingWeight = function(n) {
        let res = 0;
        while (n) {
            res++;
            n &= n - 1;
        }
        return res;
    };