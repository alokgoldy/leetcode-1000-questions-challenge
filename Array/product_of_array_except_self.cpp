q link: https://leetcode.com/problems/product-of-array-except-self/


var productExceptSelf = function(nums) {
    const output = Array(nums.length).fill(1);

    let left = 1;
    for (let i = 0; i < nums.length; i++) {
        output[i] *= left;
        left *= nums[i];
    }

    let right = 1;
    for (let i = nums.length - 1; i >= 0; i--) {
        output[i] *= right;
        right *= nums[i];
    }

    return output;    
};


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);

        int left = 1;
        for (int i = 0; i < nums.size(); i++) {
            output[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= right;
            right *= nums[i];
        }

        return output;        
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        bool con = false;
        int zero = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == 0) 
            {
                con = true;
                zero++;
            }
            else total *= nums[i];
        }
        if(zero > 1) total = 0;
        vector<int> vec;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(con == true && nums[i] != 0) 
            {
                vec.push_back(0);
            }
            else if(con == false)
            {
                int to = total / nums[i];
                vec.push_back(to);
            }
            else if(con == true && nums[i] == 0)
            {
                vec.push_back(total);
            }
        }
        return vec;
    }
};