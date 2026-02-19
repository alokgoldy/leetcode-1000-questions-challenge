q link: https://leetcode.com/problems/greatest-common-divisor-of-strings/

#include <iostream>
#include <string>
#include <numeric>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if the concatenation of the strings is consistent
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        int gcd(int a, int b) {
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

        // Return the substring of length gcd of the two string lengths
        // C++ uses substr(pos, len) instead of slice
        return str1.substr(0, std::gcd(str1.length(), str2.length()));
    }
};

int main() {
    Solution sol;
    
    // Test Case 1
    string str1 = "ABCABC";
    string str2 = "ABC";
    cout << "Test Case 1: " << sol.gcdOfStrings(str1, str2) << endl; // Expected: "ABC"

    // Test Case 2
    string str3 = "ABABAB";
    string str4 = "ABAB";
    cout << "Test Case 2: " << sol.gcdOfStrings(str3, str4) << endl; // Expected: "AB"

    // Test Case 3
    string str5 = "LEET";
    string str6 = "CODE";
    cout << "Test Case 3: " << sol.gcdOfStrings(str5, str6) << endl; // Expected: ""

    return 0;
}


/**
 * @param {string} str1
 * @param {string} str2
 * @return {string}
 */
var gcdOfStrings = function(str1, str2) {
    if(str1 + str2 !== str2 + str1){
        return '';
    }

 function gcd(a, b){
        if(b === 0) return a;
        return gcd(b, a % b);
    }

    return str1.slice(0, gcd(str1.length, str2.length));
};