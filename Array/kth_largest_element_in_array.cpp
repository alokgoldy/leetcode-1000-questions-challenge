Question Link - https://leetcode.com/problems/kth-largest-element-in-an-array/


// Method 1 using nth_element

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     
        int n = nums.size();
        
        nth_element(nums.begin(),nums.begin()+k-1,nums.end(),greater<int>());

        return nums[k-1];
        
    }
};


// Method 2 using Priority Queue

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
            
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        return pq.top();
        
    }
};