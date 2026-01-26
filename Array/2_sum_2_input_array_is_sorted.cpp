q link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> res;

        for(int i=0; i<numbers.size(); i++){
            int req = target - numbers[i];

            if(res.find(req) != res.end()){
                return {res[req], i+1};
            }
            res[numbers[i]] = i+1;
        }
        return {};
    }
};

var twoSum = function(numbers, target) {
    let left = 0;
    let right = numbers.length - 1;

    while(left < right){
        let sum = numbers[left] + numbers[right];

        if(sum === target){
            return [left+1, right+1];
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return [];
};