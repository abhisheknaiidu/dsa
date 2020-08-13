class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return 0;
        unordered_set <int> hash;
        for(int i=0; i<n; i++) {
            if(hash.find(nums[i]) != hash.end()) {
                return true;
            }
            else {
                hash.insert(nums[i]);
            }
        }
        return false;
    }
};