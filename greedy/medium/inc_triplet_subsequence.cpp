q https://leetcode.com/problems/increasing-triplet-subsequence/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int f=INT_MAX,s=INT_MAX;
        for(auto i:nums)
        {
            if(i<=f)f=i;
            else if(i<=s)s=i;
            else return true;
            
        }
        return false;
    }
};