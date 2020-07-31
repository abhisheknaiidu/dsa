class Solution {
public:
    long long int reverse(int num) {
        // int a[5];
        long long int rev = 0;
        long long int x;
        // checking overflow
        if(num == INT_MIN)return 0;
        if(num < 0) {
            x = -num;
        }
        else {
           x = num;
        }
        
        while(x>0) {
            // checking overflow
            if(1L*rev*10>INT_MAX){
                return 0; 
            }
            rev = rev*10 + x%10;
            // cout << x << endl;
            x = x/10; 
        } 
        return num>0 ? rev : -rev ;
    }
};