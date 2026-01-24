q link: https://leetcode.com/problems/h-index-ii/

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int left = 0, right = n - 1;
        int ans = 0;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(citations[mid] >= n-mid){
                ans = n - mid;
                right = mid - 1;
            }else {
                left = mid + 1;
            }
        }
        return ans;
    }
};

var hIndex = function(citations) {
    let n = citations.length;
    let left = 0, right = n - 1;
    let ans = 0;

    while(left <= right){
        let mid = left + Math.floor((right - left) / 2);

        if(citations[mid] >= n-mid){
            ans = n - mid;
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }
    return ans;
};