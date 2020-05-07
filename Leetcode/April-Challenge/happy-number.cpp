class Solution {
    int f(int n) {
        int sum = 0;
        // splits the number into digits;
        while ( n>0 ) {
            int digit = n%10;
            n/=10;
            sum+=digit*digit;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
       while( n!=1 ) {
          n = f(n);
       }
        return true;
   } 
};
