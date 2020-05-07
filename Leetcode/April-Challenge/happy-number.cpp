class Solution {
    int f(int n) {
        int sum = 0;
        // splits the number into digits;
        while ( n>0 ) {
            int digit = n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
       while( n>0 ) {
          n = f(n);
           if(n==4) {
               return false;
           }
           else if (n==1) {
               return true;
           }
       }
        return true;
   } 
};

or Using Set :

class Solution {
    int f(int n) {
        int sum = 0;
        // splits the number into digits;
        while ( n>0 ) {
            int digit = n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
       
       unordered_set <int> m;
        while(true) {
            if(n ==1) return true;
            n = f(n);
            // if element is present
            if(m.find(n) != m.end()) return false;
            m.insert(n);
        }
   } 
};