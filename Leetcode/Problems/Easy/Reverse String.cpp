class Solution {
public:
    void reverse(vector<char> &s, int st, int e) {
        while(st<e) {
            char t = s[st];
            s[st] = s[e];
            s[e] = t;
            st++;
            e--;
        }
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        reverse(s, 0, n-1);
    }
};