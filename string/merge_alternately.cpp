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


// date 15 march 2026

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        const int n = word1.length();
        const int m = word2.length();

        string merged = "";

        const int mxLn = max(n,m);

        for(int i = 0; i<mxLn; i++){

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

/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    let merged = '';

    const n = word1.length;
    const m = word2.length;

    const mxLn = Math.max(m,n);

    for(let i = 0; i<mxLn; i++){
        if(i<n){
            merged += word1[i];
        }

        if(i<m){
            merged += word2[i];
        }
    }
    return merged;
};


// JAVA

class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder merged = new StringBuilder();

        int m = word1.length();
        int n = word2.length();
        int maxLength = Math.max(m , n);

        for(int i = 0; i< maxLength; i++){
            if(i < m){
                merged.append(word1.charAt(i));
            }

            if(i < n){
                merged.append(word2.charAt(i));
            }
        }
        return merged.toString();
    }
}