class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int n = piles.size();
        int ans = 0;
        int count = 0;
        int c = n/3;

        for(int i=1; i<piles.size(); i+=2) {
            count++;
            ans += piles[i];
            cout << ans << " ";
            if(count==c) {
                break;
            }
        }
        return ans;
    }
};