q link: https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> res;

        for(int i=0; i<magazine.size(); i++){
            res[magazine[i]]++;
        }

        for(int i=0; i<ransomNote.size(); i++){
            if(res.find(ransomNote[i]) == res.end() || res[ransomNote[i]] == 0){
                return false;
            }
            res[ransomNote[i]]--;
        }
        return true;
    }
};

var canConstruct = function(ransomNote, magazine) {
    let res = {};

    for(let i=0; i<magazine.length; i++){
        res[magazine[i]] = (res[magazine[i]] || 0) + 1;
    }

    for(let i=0; i<ransomNote.length; i++){
        if(!res[ransomNote[i]]){
            return false;
        }
        res[ransomNote[i]]--;
    }
    return true;
};