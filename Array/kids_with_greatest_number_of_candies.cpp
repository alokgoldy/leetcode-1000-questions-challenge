q link - https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());

        vector<bool>ans;

        for(int i =0; i<candies.size(); i++){
            if(candies[i] + extraCandies >= max){
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};


/**
 * 1431. Kids With the Greatest Number of Candies
 * 
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    // Find the maximum number of candies any kid currently has
    const maxCandies = Math.max(...candies);
    
    // Check if adding extraCandies makes each kid's total >= maxCandies
    // Using map creates a new array of boolean results
    return candies.map(candy => (candy + extraCandies) >= maxCandies);
};

// Test cases
console.log(kidsWithCandies([2,3,5,1,3], 3)); // Expected: [true,true,true,false,true]
console.log(kidsWithCandies([4,2,1,1,2], 1)); // Expected: [true,false,false,false,false]
console.log(kidsWithCandies([12,1,12], 10));  // Expected: [true,false,true]
