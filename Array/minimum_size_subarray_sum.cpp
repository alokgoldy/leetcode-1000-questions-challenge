q link: https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int left = 0;
        int sum = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum >= target) {
                res = min(res, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return res == INT_MAX ? 0 : res;
    }
};

/**
 * @param {number} target
 * @param {number[]} nums
 * @return {number}
 */
var minSubArrayLen = function(target, nums) {
    let res = Number.MAX_SAFE_INTEGER;
    let left = 0;
    let sum = 0;
    for(let right = 0; right<nums.length; right++){
        sum+=nums[right];
        while(sum>=target){
            res = Math.min(res, right-left+1);
            sum-=nums[left];
            left++;
        }
    }
    return res == Number.MAX_SAFE_INTEGER ? 0 : res;
};