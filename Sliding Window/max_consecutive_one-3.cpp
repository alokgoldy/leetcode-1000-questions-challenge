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


/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var longestOnes = function(nums, k) {
    let i = 0, j = 0;

    while(j < nums.length){
        if(nums[j++] === 0){
            k--;
        }

        if(k<0){
            if(nums[i++] === 0){
                k++;
            }
        }
    }
    return j - i;
};