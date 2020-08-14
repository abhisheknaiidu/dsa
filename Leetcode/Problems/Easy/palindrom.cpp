class Solution {
public:
    bool isPalindrome(int x) {
        vector <int> v;
        int res=0;
        if( x == 0) return true;
        while(x) {
            res = x%10;
            x = x/10;
            if ( res < 0) return false;
            else {
               v.push_back(res);
            }
            // cout << res << endl;
        }
        int n = v.size();
        for(int i=0; i<v.size(); i++) {
            // cout << v[i] << endl;
            if(v[i] == v[n-1]) {
                n--;
                if(n==0) return true;
                // cout << n << endl;
            }
            else {
                break;
            }     
        }
        return false;
    }
};