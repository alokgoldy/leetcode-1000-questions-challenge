q link - https://leetcode.com/problems/happy-number/?envType=study-plan-v2&envId=top-interview-150


/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
    const seen = new Set();

    while(n !==1 && !seen.has(n)){
        seen.add(n);
        let sum = 0;

        while(n > 0){
            const digit = n%10;
            sum+= digit * digit;
            n = Math.floor(n/10);
        }
        n = sum;
    }
    return n === 1;
};


class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>seen;

        while(n!=1 && !seen.count(n)){
            seen.insert(n);
            int sum = 0;
            while(n > 0){
                int digit = n%10;
                sum += digit * digit;
                n/=10;
            }
            n = sum;
        }
        return n == 1;
    }
};