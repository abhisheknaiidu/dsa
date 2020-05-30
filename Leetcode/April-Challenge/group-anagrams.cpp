class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector<string>> m;
        // storing as key-value pairs
        for (auto s : strs) {
            string s2 = s;
            sort(s2.begin(), s2.end());
            m[s2].push_back(s);
        }

        // Making List of Strings
        vector<vector <string>> ans;
        for (auto x : m) {
            // cout << x.second << endl;
            ans.push_back(x.second);
        }

        return ans;
    }
};
