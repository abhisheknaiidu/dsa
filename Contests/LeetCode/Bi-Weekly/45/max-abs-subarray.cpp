class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
    // for max sum
        int maxx = 0;
        int sum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            sum += nums[i];
            if(sum < 0) sum = 0;
            maxx = max(sum, maxx);
        }
     // for min sum
        int minn = 0;
        sum = 0;
        for(int i=0; i<n; i++) {
            sum += nums[i];
            if(sum > 0) sum = 0;
            minn = min(sum, minn);
        }
        return max(maxx, abs(minn));
    }
};