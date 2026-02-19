q link: https://leetcode.com/problems/merge-strings-alternately/

/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    const merged = [];

    for(let i=0; i< Math.max(word1.length, word2.length); i++){

        if(i < word1.length){
            merged.push(word1[i]);
        }

        if(i < word2.length){
            merged.push(word2[i]);
        }
    }
    return merged.join("");
};

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        const int n = word1.length();
        const int m = word2.length();
        string merged = "";

        for(int i=0; i< max(n, m); i++){
            if(i < n){
                merged += word1[i];
            }

            if(i < m){
                merged += word2[i];
            }
        }
        return merged;
    }
};