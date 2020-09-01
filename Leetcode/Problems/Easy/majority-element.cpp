class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> m;
        int n = nums.size();
        for(int i=0; i<n; i++) {
             m[nums[i]]++;
        }
        int ans = 0;
        for( auto x: m) {
            if(x.second > n/2) {
                ans = x.first;
            }
        }
        return ans;
    }
};

// Using Moore's Voting Algorithm O(N)
// Majority Stores the element that is majority currently and after the loop completes, returns majority of the total array,
//Count keeps count of the currently majority element
	// int majority, count = 0;
	// for(auto x: A){
	// if(count == 0)
	// majority = i;
	// if(i == majority)
	// ++count;
	// else
	// --count;
	// }
    // or count += (num == candidate) ? 1 : -1;
	// return majority;

/// If the elements are sorted in monotonically increasing 
// or decreasing) order, the majority element can be found at index ⌊n/2⌋and ⌊n/2⌋+1, 
// incidentally, if nnn is even).