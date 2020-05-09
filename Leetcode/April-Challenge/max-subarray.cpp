// Kadane's Algorithm:
// -2 1 -3 4 -1 2 1 -5 4
// moves from L -> R
// O(1) space Time Complexity

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // INT_MIN == -infinity for atleast one element in an array 
        // otherwise can be taken as 0 as well, if it was a empty array!
        int answer= INT_MIN , a = 0;
        for ( int x: nums ) {
            a += x;
            answer = max(answer, a);
            a = max(a, 0);
        }
        return answer;
    }
};