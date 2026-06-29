class Solution {
public:

    bool isVowel(char ch){
        return ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u';
    }

    int maxVowels(string s, int k) {
        
        int n = s.size();
        int start = 0;
        int end = 0;

        int ans = 0;
        int temp = 0;

        while(end < n){

            while(end - start < k){
                if(isVowel(s[end])){  
                  temp++;
                }
                end++;
            }

            ans = max(ans, temp);
            if(isVowel(s[start])){
                temp--;
            }
            start++;
        }
        return ans;
    }
};

var maxVowels = function(s, k) {
    const vowels = new Set(['a','e','i','o','u']);
    
    let currentCount = 0;
    let maxCount = 0;
    
    // Step 1: First k characters, let's count
    for (let i = 0; i < k; i++) {
        if (vowels.has(s[i])) currentCount++;
    }
    maxCount = currentCount;
    
    // Step 2: Slide
    for (let i = k; i < s.length; i++) {
        if (vowels.has(s[i])) currentCount++;          // add new
        if (vowels.has(s[i - k])) currentCount--;      // remove old
        maxCount = Math.max(maxCount, currentCount);   // update record
    }
    
    return maxCount;
};