class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map <char,int> m;
        int n = s.size();
        for(int i=0; i<n; i++) {
            m[s[i]]++;
        }
        for( auto x: t) {
            if(m.find(x) == m.end() || m[x] == 0) return false;
            m[x]--;
        }
        
        return true;

    }
};

// using sorting:
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;