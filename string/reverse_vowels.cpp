q link - https://leetcode.com/problems/reverse-vowels-of-a-string/description/

const reverseVowels=e=>{const o={a:1,e:1,i:1,o:1,u:1,A:1,E:1,I:1,O:1,U:1},t=e.split("");let n=0,r=t.length-1;for(;n<r;)o[t[n]]&&o[t[r]]?([t[n],t[r]]=[t[r],t[n]],n++,r--):o[t[n]]?r--:n++;return t.join("")};


/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function(s) {
    const VOWELS = {'a': 1, 'e': 1,'i': 1,'o': 1,'u': 1,'A': 1,'E': 1,'I': 1,'O': 1,'U': 1};
    const arr = s.split('');

    let i = 0, j = arr.length - 1;

    while(i < j){
        if(VOWELS[arr[i]] && VOWELS[arr[j]]){
            [arr[i], arr[j]] = [arr[j], arr[i]];
            i++;
            j--;
        } else if(VOWELS[arr[i]]){
            j--;
        } else {
            i++;
        }
    }
    return arr.join('');
};



class Solution {
public:
    string reverseVowels(string s) {
        const unordered_set<char> VOWELS = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int i = 0, j = s.length() - 1;
        while(i < j){
            if(VOWELS.find(s[i]) == VOWELS.end()){
                i++;
            } else if(VOWELS.find(s[j]) == VOWELS.end()){
                j--;
            } else {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }
};

class Solution {
public:
    string reverseVowels(string s) {
        
        string word = s;
        int start = 0;
        int end = s.length() - 1;

        string vowels = "aeiouAEIOU";

        while(start < end) {
            while(start < end && vowels.find(word[start]) == string::npos){
                start++;
            }

            while(start < end && vowels.find(word[end]) == string::npos){
                end--;
            }
            swap(word[start], word[end]);
            start++;
            end--;
        }
        return word;
    }
};