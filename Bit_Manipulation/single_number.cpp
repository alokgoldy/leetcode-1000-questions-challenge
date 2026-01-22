q link: https://leetcode.com/problems/single-number/

class solution {
    public:
        int singleNumber(vector<int>& nums) {
            int res = 0;
            for (int num : nums) {
                res ^= num;
            }
            return res;
        }
};

class solution {
    public:
    int  singleNumber(vector<int>& nums){
        int res = 0;
        for(int num: nums){
            res ^= num;
        }
        return res;
    }
}

/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let res = 0;
    for(let i = 0; i<nums.length; i++){
        res^=nums[i];
    }
    return res;
};