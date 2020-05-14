class Solution {
public:
    string removeKdigits(string num, int k) {
        
        int n = num.size();
        if( n<= k ) {
            return "0";
        }
        
        while(k) {
            
            int i = 0;
            // for finding the peaks.
            while(i+1<n && num[i+1]>=num[i]) i++;
            num.erase(i,1);
            
            k--;
        }
        
        // for deleting cases for  0 0 2 0 0 or 0 0 0 0 0 
        int j = 0;
        while( j < n && num[j] == '0' ) j++;
        
        num = num.substr(j);
        
        return num=="" ? "0" : num;
    }
};

