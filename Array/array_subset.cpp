question link - https://leetcode.com/problems/subsets/
class Solution {
public:
    void fun(vector<int>&num,vector<vector<int>>&v,vector<int>tmp,int idx)
    {
        v.push_back(tmp);
        
        for(int i=idx;i<num.size();i++)
        {
            tmp.push_back(num[i]);
            fun(num,v,tmp,i+1);
            tmp.pop_back();
        }
        return;
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>tmp;
        fun(nums,v,tmp,0);
        
        return v;
    }
};