class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        int n = s.size();
        vector <int> v;
        
        unordered_map <int, int> m;
        if(s.size() != t.size()) return false;
    
        for(int i=0; i<n; i++) {
            if(s[i] != t[i]) {
            int diff = s[i] < t[i] ? t[i] - s[i] : 26 + t[i]-s[i];
            
            if(diff > k ) return false;
            if(m.find(diff) != m.end()) {
                m[diff] += 26;
                if(m[diff] > k) return false;
            }
            else {
                m[diff] = diff;
                if(m[diff] > k) return false;
            }
            }
            
        }
        
    return true;
  }
};