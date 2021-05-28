question Link - https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int>s;
        vector<int>v;
        for(auto i: nums1)
        {
            s.insert(i);
        }
        
        for(auto i : nums2)
        {
            if(s.erase(i))
                v.push_back(i);
        }
        
        return v;
    }
};