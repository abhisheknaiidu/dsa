class Solution {
public:
    int minOperations(int n) {
        int avg = n;
        int res = 0;
        for(int i=1; i<2*n+1; i+=2)  {
            cout << i << " ";
            res += max(0,avg-i);
        }
        return res;
    }
};