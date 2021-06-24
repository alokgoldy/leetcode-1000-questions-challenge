question link -> https://leetcode.com/problems/goal-parser-interpretation/
class Solution {
public:
    string interpret(string c) {
        
        string ans = "";
        
        for(int i=0;i<c.length();i++)
        {
            if(c[i]=='G')
                ans+="G";
            else if(c[i]=='(' and c[i+1]==')')
            {
                ans+="o";
                i++;
            }
            else if(c[i]=='(')
            {
                ans+="al";
                i+=3;
            }
        }
        
        return ans;
    }
};