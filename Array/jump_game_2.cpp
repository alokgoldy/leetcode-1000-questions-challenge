q link https://leetcode.com/problems/jump-game-ii/


var jump = function(nums) {
    
    let near = 0, far = 0, jumps = 0;

    while(far < nums.length-1){
        let farthest = 0;

        for(let i = near; i<=far; i++){
            farthest = Math.max(farthest, i+nums[i])
        }
        near = far + 1;
        far = farthest;
        jumps++;
    }
    return jumps;
};

class Solution {
public:
    int jump(vector<int>& nums) {
        
        int far = 0;
        int near = 0;
        int jumps = 0;

        while(far < nums.size() -1){
            int farthest = 0;
            for(int i= near; i<= far; i++){
                farthest = max(farthest, i + nums[i]);
            }
            near = far + 1;
            far = farthest;
            jumps++;
        }
        return jumps;
    }
};