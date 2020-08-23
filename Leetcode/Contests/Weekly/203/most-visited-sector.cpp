class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int f = rounds[0], l =rounds.back();
        vector<int> ans;
        while(f != l) {
            ans.push_back(f);
            cout << f << " ";
            f = f % n;
            cout << f << endl;
            f++;
        }
        ans.push_back(l);
        sort(ans.begin(), ans.end());
        return ans;
        }
};
