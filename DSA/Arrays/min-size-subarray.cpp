class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
      if(nums.size() == 0) return 0;
      int l = 0, sum = 0;
      int ans = INT_MAX;
      int n = nums.size();
      for(int i=0; i<n; i++) {
        sum += nums[i];
        while(sum >= s) {
          ans = min(ans, i - l + 1);
          sum -= nums[l++];
        }
      }
      return ans != INT_MAX ? ans : 0;
    }
};