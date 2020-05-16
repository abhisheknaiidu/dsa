class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int sum1=0,sum2=0,tsum=0, max_sum= INT_MIN, min_sum = INT_MAX;
        for( int a:A) {
            
            sum1+=a, sum2+=a, tsum+=a;
            min_sum = min(min_sum,sum2);
            max_sum = max(max_sum, sum1);
            sum1 = max(sum1,0);
            sum2 = min(0,sum2);
            
        }
        // for all negative numbers
        if(tsum == min_sum) return max_sum;
        else return max(max_sum,tsum-min_sum);
        
        
    }
};
