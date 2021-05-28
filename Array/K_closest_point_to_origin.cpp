Question Link - https://leetcode.com/problems/k-closest-points-to-origin/
class Solution {
    
public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.first>b.first;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        
        vector<pair<double,int>>v;
        vector<vector<int>>ans;
        for(int i=0;i<p.size();i++)
        {
            
                double k = sqrt(p[i][0]*p[i][0] + p[i][1]*p[i][1]);
                v.push_back(make_pair(k,i));
            
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<k;i++){
            ans.push_back(p[v[i].second]);
        }
        
        return ans;
    }
};