#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	vector<int> nums{7,6,4,-1,1,2};
	int target = 16;
	int l1,l2,r;
	sort(nums.begin(), nums.end());
	for(int i=0; i<nums.size()-2; i++) {
		l1 = i+1;
		l2 = i+2;
		r = nums.size()-1;
		while(l1<r && l2<r) {
			int curSum = nums[i] + nums[l1] + nums[l2] + nums[r];
			if(curSum == target) {
				
			}
			else if(curSum > target) {
				r--;
			}
			else {
				l1++;
				l2++;
			}
			}
		}
	   return 0;
	}


