// q link - leetcode.com/problems/remove-element/ 

var removeElement = function(nums, val) {
    
    let c = 0;
    for(let i =0; i<nums.length; i++){
        if(nums[i] !== val){
            nums[c] = nums[i];
            c++;
        } 
    }
    return c;
};

// Time Complexity - O(n)
// Space Complexity - O(1)

// Explanation - We are using two pointers approach here. One pointer is used to traverse the array and other pointer is used to keep track of the position of the element which is not equal to val.

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int c = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] !== val){
                nums[c] = nums[i];
                c++;
            } 
        }
        return c;
    }
};
