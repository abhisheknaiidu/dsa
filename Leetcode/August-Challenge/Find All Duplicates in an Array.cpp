class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_set <int> hash;
        vector <int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            if(hash.find(nums[i]) != hash.end()) {
                ans.push_back(nums[i]);
            }
            else {
                hash.insert(nums[i]);
            }
        }
        return ans;
    }
};