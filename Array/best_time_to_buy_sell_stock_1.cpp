Question link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int mx = 0;
        int mn = INT_MAX;
        
        for(auto i:p)
        {
            mn = min(mn,i);
            mx = max(mx,i-mn);
        }
        return mx;
    }
};