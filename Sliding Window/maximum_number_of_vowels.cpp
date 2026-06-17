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