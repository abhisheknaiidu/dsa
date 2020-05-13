class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int x=0;
        // for(int a : nums) {
        //     cout << a << "->";
        //     x^=a;
        //     cout << x << endl;
        // }
        
        
        //1. BOUNDARY CHECKS
        //2. PAIR INDEX PROPERTY
        //3. UNIQUE PROPERTY
        //4. PARTITION PROPERTY
        // BST run in O(log n) time and O(1) space.
        // XOR one takes O(N);
        int high = nums.size() - 1;
        int low = 0;
        int mid;
        
        //Checking Boundary Conditions
        if(high == 0) return nums[0];
        
        else if(nums[low]!=nums[low+1]) return nums[low];
        
        else if(nums[high]!=nums[high-1]) return nums[high];
        
        while(low<=high) {
            
            mid = low + (high - low)/2;
            
            if( nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])  return nums[mid];
            
            if(((mid%2==0) && nums[mid]==nums[mid+1]) 
               || ((mid%2==1) && nums[mid] == nums[mid-1])) {
                low = mid+1;
            }
            else high = mid - 1;
        }
        return 0;
    }
};
