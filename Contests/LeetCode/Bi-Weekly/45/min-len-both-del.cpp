class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int i = 0, j = n-1;
        while(i<j) {
            if(s[i] != s[j]) return j - i + 1;
            while(i+1 < j && s[i] == s[i+1]) i++;
            while(i < j - 1 && s[j] == s[j-1]) j--;
            i++;
            j--;
        }
        return j - i + 1;
    }
};