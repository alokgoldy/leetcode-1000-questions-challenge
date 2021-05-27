Question Link - https://leetcode.com/problems/wiggle-sort-ii/

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        vector<int>v(nums);
        
        sort(v.begin(),v.end());
        
        int n = nums.size();
        int j,k=n-1;
        n%2==1? j = n/2 : j =n/2 - 1;
        
        for(int i=0;i<n;i++)
        {
            i%2==0?nums[i] = v[j--]:nums[i] = v[k--];
        }
    }
};