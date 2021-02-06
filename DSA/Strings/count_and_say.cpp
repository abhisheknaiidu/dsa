class Solution {
public:
    string countAndSay(int n) {
      string x, ans = "1";
      int count, i;
      while(--n) {
        x = ans;
        count = 1;
        ans.clear();
        for(i = 1; i<x.size(); i++) {
          if(x[i] == x[i-1]) {
            count++;
          }
          else{
            ans += to_string(count) + x[i-1];
            count = 1;
          }
        }
        ans += to_string(count) + x.back();
        // cout << ans << endl;
      }
      return ans;
    }
};