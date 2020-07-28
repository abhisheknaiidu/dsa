// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int min_check = 100000;
        for(auto i:prices) {
            min_check = min(min_check, i);
            res = max(res, i-min_check);
        }
        return res;
    }
};