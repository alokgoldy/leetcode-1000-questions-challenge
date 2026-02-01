q link: https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;

        for (int i = 0; i < s.size(); i++) {
            char charS = s[i];
            char charT = t[i];

            if (sToT.count(charS) && sToT[charS] != charT) {
                return false;
            }

            if (tToS.count(charT) && tToS[charT] != charS) {
                return false;
            }

            sToT[charS] = charT;
            tToS[charT] = charS;
        }

        return true;
    }
};

var isIsomorphic = function(s, t) {
    if (s.length !== t.length) {
        return false;
    }

    let sToT = {};
    let tToS = {};

    for (let i = 0; i < s.length; i++) {
        let charS = s[i];
        let charT = t[i];

        if (sToT[charS] && sToT[charS] !== charT) {
            return false;
        }

        if (tToS[charT] && tToS[charT] !== charS) {
            return false;
        }

        sToT[charS] = charT;
        tToS[charT] = charS;
    }

    return true;
};
