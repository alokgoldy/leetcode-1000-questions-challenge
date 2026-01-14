q link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            if (map.find(target - nums[i]) != map.end()) {
                res.push_back(map[target - nums[i]]);
                res.push_back(i);
                return res;
            }

            map[nums[i]] = i;
        }

        return res;
    }
};

var twoSum = function(nums, target) {
    let res = [];
    let map = new Map();

    for (let i = 0; i < nums.length; i++) {
        if (map.has(target - nums[i])) {
            res.push(map.get(target - nums[i]));
            res.push(i);
            return res;
        }

        map.set(nums[i], i);
    }

    return res;
};