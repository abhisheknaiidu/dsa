class Solution {
public:
    int findPeakElement(vector<int>& nums) {
// T.C - O(N)
// S.C - O(1)
//       for(int i=0; i<nums.size(); i++) {

//         if(nums[i] < nums[i+1]) {
//           return i;
//         }
//       }
//       return nums.size() - 1;

// Better Approach, do binary search =>
// T.C => O(Log2(N))
// S.C => O(1) 
      int l=0, r = nums.size() -1;
      while(l<r) {
        int mid = l + (r-l)/2;
        if(nums[mid] < nums[mid+1]) {
          l = mid + 1;
        }
        else {
          r = mid;
        }
      }
      return l;
    }
};