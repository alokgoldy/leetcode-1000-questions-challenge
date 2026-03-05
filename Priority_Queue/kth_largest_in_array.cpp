q link - https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>pq;

        for(int i: nums){
            pq.push(i);

            if(pq.size()>k){
                pq.pop();
            }
        }

        return pq.top();
    }
};

var findKthLargest = function(nums, k) {
    const pq = new PriorityQueue((a, b) => a - b);
    for(let n of nums){
        pq.enqueue(n);
        if(pq.size() > k){
            pq.dequeue();
        }
    }
    return pq.dequeue();
};