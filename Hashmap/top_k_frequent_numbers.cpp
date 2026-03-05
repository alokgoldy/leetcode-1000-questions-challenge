q link - https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;

        for(int n: nums){
            freq[n]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(auto it: freq){
            pq.push({it.second, it.first});

            if(pq.size() > k){
                pq.pop();
            }
        }

        vector<int>result;

        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};

var topKFrequent = function(nums, k) {
    const freq = {};
    for(let n of nums){
        freq[n] = (freq[n] || 0) + 1;
    }
    const pq = new PriorityQueue((a, b) => a[0] - b[0]);
    for(let [n, f] of Object.entries(freq)){
        pq.enqueue([f, n]);
        if(pq.size() > k){
            pq.dequeue();
        }
    }
    const result = [];
    while(!pq.isEmpty()){
        result.push(Number(pq.dequeue()[1]));
    }
    return result;
};


// second approach

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;
        
        for(int n : nums){
            freq[n]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for(auto it : freq){
            bucket[it.second].push_back(it.first);
        }

        vector<int> result;

        for(int i = bucket.size()-1; i >= 0 && result.size() < k; i--){
            for(int n : bucket[i]){
                result.push_back(n);
                if(result.size() == k) return result;
            }
        }

        return result;
    }
};