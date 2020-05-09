class Solution {
public:
    bool isPerfectSquare(int num) {
        for (long int i=1; i*i <= num; i++) {
            if ((num > 0 ) && (num % i == 0) && (num/i == i)) {
                return true;
            }
        }
        return false;
        // long int i =1;
        // for( ; i*i<num; i++);
        // return i*i==num;
        
        
        // OR
        // 1 = 1
        // 1+3 = 4
        // 1 + 3 + 5 = 9
        // 1 + 3 + 5 + 7 = 16
        // int i=1;
        // while(num>0){
        //     num -= i;      //Subtracting odd number from num and updating num
        //     i +=2;         // Updating i to the next odd number
        //     if(!num) return true;
        // }
        // return false;
    }
};
