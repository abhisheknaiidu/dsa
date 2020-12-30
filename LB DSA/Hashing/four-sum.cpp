class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
  sort(nums.begin(), nums.end());
	int i,j;
	int n = nums.size();
	vector<vector<int>> res;
  if(n == 0) return res;
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			int s = j+1;
			int e = n-1;
			while(s < e) {
				// int m = s + (e-s)/2;
				if((nums[i] + nums[j] + nums[s] + nums[e]) < target) {
					s++;
				}
				else if((nums[i] + nums[j] + nums[s] + nums[e]) > target) {
					e--;
				}
				else {
					vector<int> quad(4,0);
					quad[0] = nums[i];
					quad[1] = nums[j];
					quad[2] = nums[s];
					quad[3] = nums[e];
					res.push_back(quad);

					// processing the duplicates of number 4
					while(s < e && nums[s] == quad[2]) s++;

					//processing the duplicates of number 3
					while(s < e && nums[e] == quad[3]) e--;
				}
			}
			// processing the duplicates of number 2
			while(j+1 < n && nums[j+1] == nums[j]) j++;
		}
		while(i+1 < n && nums[i+1] == nums[i]) i++;
	}  
      return res;
    }
};