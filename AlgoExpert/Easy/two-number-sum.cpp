class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector <int> ans;
        for(int i=0; i<nums.size(); i++) {
            int want = target - nums[i];
            if(hash.find(want) != hash.end()) {
                ans.push_back(hash[want]);
                ans.push_back(i);
                return ans;
            }else {
                hash[nums[i]] = i;
            }
        }
        return {};
    }
}; 