q link: https://leetcode.com/problems/search-in-rotated-sorted-array/

function search(nums, target){
    let left = 0;
    let right = nums.length - 1;

    while(left <= right){
        const mid = Math.floor((left + right) / 2);

        if(nums[mid] === target){
            return mid;
        }

        if(nums[left] <= nums[mid]){
            if(nums[left] <= target && target < nums[mid]){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            if(nums[mid] < target && target <= nums[right]){
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return -1;
}


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                return mid;
            }

            if(nums[left] <= nums[mid]){
                if(nums[left] <= target && target < nums[mid]){
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if(nums[mid] < target && target <= nums[right]){
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};