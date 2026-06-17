class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int size = nums.size();
        double sum = 0;
        double max_avg = INT_MIN;

        while(j < size){
            while(j - i < k){
                sum += nums[j++];
            }
            
            double avg = sum/k;
            max_avg = max(max_avg, avg);
            sum -= nums[i++];
        }
        return max_avg;
    }
};