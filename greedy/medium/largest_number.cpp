q https://leetcode.com/problems/largest-number/

class Solution {
public:
    static bool cmp(string f,string s)
    {
        string one = f+s;
        string two = s+f;
        
        int i=0;
        
        while(one[i]&&two[i])
        {
            if(one[i]>two[i])
                return true;
            else if(one[i]<two[i])
                return false;
            ++i;
        }
        return false;
    }
    string largestNumber(vector<int>& nums) {
        
        vector<string>s;
        
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)k++;
            s.push_back(to_string(nums[i]));
        }
        
        sort(s.begin(),s.end(),cmp);
        
        string ans="";
        for(int i=0;i<s.size();i++)
            ans+=s[i];
        
        return k==nums.size()?"0":ans;
    }
};