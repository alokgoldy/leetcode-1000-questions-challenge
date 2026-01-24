q link - https://leetcode.com/problems/valid-palindrome/description/

var isPalindrome = function(s) {
    s = s.replace(/[^a-zA-Z0-9]/g, '').toLowerCase();
    let left = 0;
    let right = s.length - 1;
    while (left < right) {
        if (s[left] !== s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
};

class Solution {
public:
    bool isPalindrome(string s) {
        s = s.replace(/[^a-zA-Z0-9]/g, '').toLowerCase();
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (s[left] !== s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";

        for(int i = 0; i< s.length(); i++){
            if(isalnum(s[i])){
                t+=tolower(s[i]);
            }
        }
        string c = t;
        reverse(t.begin(), t.end());
        return c==t;
    }
};