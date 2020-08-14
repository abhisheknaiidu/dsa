// Simple Approach
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(uint32_t i=0;i<32; i++) {
            ans = ans*2 + (n%2);
            n = n/2;
        }
        return ans;
    }
};

// Using Bits Approach

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int ans=0;
        for(int i=0;i<32;i++){
            if((n & (1<<i))>0){
            	//If a bit at ith position is set in the i/p no. 
            	// then set the bit at (31 - i) in o/p
                ans = ans | (1<<(31-i));
            }
        }
        return ans;
    }
};