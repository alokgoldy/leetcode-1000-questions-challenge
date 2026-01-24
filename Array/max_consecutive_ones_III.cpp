q link: https://leetcode.com/problems/max-consecutive-ones-iii/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = 0;
        int left = 0;
        int sum = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum > k) {
                sum -= nums[left];
                left++;
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
    let res = 0;
    let left = 0;
    let sum = 0;
    for(let right = 0; right<nums.length; right++){
        sum+=nums[right];
        while(sum>k){
            sum-=nums[left];
            left++;
        }
        res = Math.max(res, right-left+1);
    }
    return res;
};


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;

        for(int right = 0; right < nums.size(); right++){
            if(nums[right] == 0) k--;

            if(k < 0){
                if(nums[left] == 0){
                    k++;
                }
                left++;
            }
        }
        return nums.size() - left;
    }
};