
// The key here is to double the string, that is, append the string to itself. In this way, the pattern would be duplicated.
// On removing the first and the last characters, if there exists some pattern, we would still be able to find the original 
// string somewhere in the middle, taking some characters from the first half and some from the second half.

// s = "abab"
// s + s = "abababab"
// (s + s).find(s,1)<s.size() => bababa
// Still s is present in the str, ==> returns true 
// else false!!


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
      return (s+s).find(s,1)<s.size();
    }
};