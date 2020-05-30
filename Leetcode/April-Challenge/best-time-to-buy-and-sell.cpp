// Approach 1 ==>
// instead of looking for every peak following a valley, we can simply go on crawling over the slope and keep on adding the // profit obtained from every consecutive transaction. In the end,we will be using the peaks and valleys effectively, but we // need not track the costs corresponding to the peaks and valleys along with the maximum profit, but we can directly keep // on adding the difference between the consecutive numbers of the array if the second number is larger than the first one, // and at the total sum we obtain will be the maximum profit.

// Time complexity : O(n). Single pass.
// Space complexity: O(1). Constant space needed.

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int max_profit = 0;
		for (int i = 1; i < prices.size(); i++) {
			if (prices[i] > prices[i - 1])
				max_profit += prices[i] - prices[i - 1];
		}
		return max_profit;
	}
};

// Approach 2 ==> Peak-Valley Approach
// TotalProfit=∑i(height(peaki)−height(valleyi))
// Peaks and Valleys should be calculated only taking
// next element as a reference always!
// Make sure to add valley first then peak to optimise profit
vi v;
v = {7, 1, 5, 3, 6, 4};
int i = 0;
int peak = v[0];
int valley = v[0];
int max_profit = 0;

// cout << peak << valley ;
while (i < v.size() - 1) {
	while (i < v.size() - 1 && v[i] >= v[i + 1])
		i++;
	valley = v[i];
	while (i < v.size() - 1 && v[i] <= v[i + 1])
		i++;
	peak = v[i];
	max_profit += peak - valley;
}
cout << max_profit;