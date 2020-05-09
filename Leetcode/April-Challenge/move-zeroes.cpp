class Solution {
public:
    // vector <int> moveZeroes(vector<int>& nums) {
    //     int length = nums.size();
    //     vector <int> ans;
    //     for ( int x : nums ) {
    //         if(x!=0) {
    //             ans.push_back(x);
    //         } 
    //     }
    //     ans.resize(length,0);
    //     return ans;
    // }
    // Its Working but not efficient as its taking more
    // extra spaces because of vectors and its operations
    
    void moveZeroes(vector <int> &nums) {
        int length = nums.size();
        int next = 0; // Pointing towards the positons of an array.
        for( int x: nums ) {
            if(x!=0) {
             nums[next] = x;
             next++;   
            }
        }
        for( int i=next ; i < length  ; i++ ) {
            nums[i] = 0;
        }
    }
};
