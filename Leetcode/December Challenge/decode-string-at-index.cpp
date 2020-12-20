class Solution {
public:
    string decodeAtIndex(string S, int K) {
      int n = S.size();
      long size = 0;
      for(int i = 0; i<n; i++) {
        if(isdigit(S[i])) {
          size *= S[i] - '0';
        }
        else {
          size++;
        }
      }
      
      for(int i = n-1; i>=0; i--) {
        K = K % size;
        // cout << K << " " << size << endl;
        if(K == 0 && isalpha(S[i])) {
          return (string) "" + S[i];
        }
        if(isdigit(S[i])) {
          // cout << typeid(S[i] - '0').name() << endl;
          size /= S[i] - '0';
        }
        else {
          size--;
        }
      }
      return "";
    }
};