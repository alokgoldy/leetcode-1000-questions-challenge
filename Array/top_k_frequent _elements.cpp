Question Link - https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>>v;
        vector<int>res;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            v.push(make_pair(it->second,it->first));
            if(v.size()>mp.size()-k)
            {
                cout<<v.size()<<" "<<mp.size()<<" "<<k;
                res.push_back(v.top().second);
                v.pop();
            }
        }
        return res;
    }
};