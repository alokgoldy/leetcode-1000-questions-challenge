q link - https://leetcode.com/problems/group-anagrams/description/

/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const obj = {};

for(let i=0;i<strs.length; i++){
    const w = strs[i];
    const key = w.split("").sort().join("");
    if(obj[key]){
        obj[key].push(w);
    }else{
        obj[key] = [w];
    }
}
const res = [];
for(let key in obj){
    res.push(obj[key]);
}
return res;
};


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;

        for( string& s: strs){
            string key = s;
            sort(key.begin(), key.end());
            ans[key].push_back(s);
        }

        vector<vector<string>> result;

        for(auto entry: ans){
            result.push_back(entry.second);
        }

        return result;
    }
};