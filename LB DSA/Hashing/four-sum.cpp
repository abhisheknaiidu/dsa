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
	vector<int> nums{4,3,3,4,4,2,1,2,1,1};
	sort(nums.begin(), nums.end());
	int i,j,k;
	int n = nums.size();
	
	int c = 0;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n-1; j++) {
			int s = j+1;
			int e = n-1;
			while(s <= e) {
				int m = s + (e-s)/2;
				if((nums[i] + nums[j] + nums[s] + nums[e]) == 9) {
					cout << nums[i] << nums[j] << nums[s] << nums[e] << endl;
				}
				if((nums[i] + nums[j] + nums[s] + nums[e]) > 9) {
					e--;
				}
				else {
					s++;
				}
			}
		}
	}


   return 0;
}