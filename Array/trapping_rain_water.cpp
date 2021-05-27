Question Link - https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& ht) {
     
        int n = ht.size();
        int lo=0,lm=0,hi=n-1,rm=n-1;
        
        int ans = 0;
        while(lo<=hi)
        {
            if(ht[lm]<ht[rm])
            {
                if(ht[lo]>ht[lm])
                {
                    lm=lo;
                    
                }
                else
                {
                    ans += ht[lm]-ht[lo];
                }
                lo++;
            }
            else
            {
                if(ht[hi]>ht[rm])
                {
                    rm = hi;
                }
                else
                {
                    ans += ht[rm]-ht[hi];
                }
                hi--;
            }
        }
        
        return ans;
    }
};