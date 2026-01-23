q link: https://leetcode.com/problems/single-number-ii/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;

        for(auto x: nums){
            m[x]++;
        }

        for(auto x: m){
            if(x.second == 1){
                return x.first;
            }
        }
        return -1;
    }
};


// bit manipulation

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int i = 0; i < 32; i++) {
            int bitCount = 0;

            for (int num : nums) {
                if ((num >> i) & 1) {
                    bitCount++;
                }
            }

            if (bitCount % 3 != 0) {
                result |= (1 << i);
            }
        }

        return result;
    }
};


// 🚀 Approach 2: Bitmask / FSM (most elegant)
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;

        for (int num : nums) {
            ones = (ones ^ num) & ~twos;
            twos = (twos ^ num) & ~ones;
        }

        return ones;
    }
};


var singleNumber = function(nums) {
    let result = 0;

    for (let i = 0; i < 32; i++) {
        let bitCount = 0;

        for (let num of nums) {
            if ((num >> i) & 1) {
                bitCount++;
            }
        }

        if (bitCount % 3 !== 0) {
            result |= (1 << i);
        }
    }

    return result;
};
