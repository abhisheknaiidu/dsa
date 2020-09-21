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

// T.C - O(Nlog(N) + Mlog(M) + N + M) ==> )(N(logN) + Mlog(M))
// S.C - O(1) because we are storing the array in place.
 
int main(int argc, char* argv[]) {
	abhisheknaiidu();

	vector<int> nums1{-1,5,10,20,28,3};
	vector<int> nums2{26,134,135,15,17};
	vector<int> ans;


	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());
	int index1 = 0;
	int index2 = 0;
	int current = INT_MAX;
	int smaller = INT_MAX;

	while(index1 < nums1.size() && index2 < nums2.size()) {
		int first = nums1[index1];
		int second = nums2[index2];
		if(first < second ) {
			current = second - first;
			index1++;
		}
		else if(second < first) {
			current = first - second;
			index2++;
		}
		else {
			// return vector<int> {first, second};
		}
		if(smaller > current) {
			smaller = current;
			ans = {first, second};
		}
	}

	for(auto x: ans) {
		cout << x << " ";
	}


   return 0;
}