q link: https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n/2];
    }
};

var majorityElement = function(nums) {
    let n = nums.length;
    nums.sort((a, b) => a - b);
    return nums[Math.floor(n / 2)];
};