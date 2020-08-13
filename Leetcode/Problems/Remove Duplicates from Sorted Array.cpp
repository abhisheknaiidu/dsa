class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    unordered_map <int,int> m;
    for(int i=0; i<n ; i++) {
        m[nums[i]]++;
    }
    int j=0;
    for(auto const &x: m) {
        nums[j] = x.first;
        j++;
    }
    nums.resize(j);
    sort(nums.begin(), nums.end());
        
    return nums.size();
    }
};