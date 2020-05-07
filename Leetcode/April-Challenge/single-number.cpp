class Solution {
public:
    // Every int can be represented as 32 bits.
    // XOR : In simpler words -
    // Just 2 things -  x^x = 0 (same) and 0^a = a
    int singleNumber(vector<int>& nums) {
     int x = 0;
        for ( int a : nums) {
            x^=a;
        }
        return x;
    }
};
