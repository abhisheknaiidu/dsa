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
	vector<int> nums1{3, 4, 6, 10, 11, 15};
	vector<int> nums2{1, 5, 8, 12, 14, 19};
	int l1 = 0;
	int l2 = 0;
	int n1 = nums1.size();
	int n2 = nums2.size();

	vector<int> ans;
	while(l1 < n1 && l2 < n2) {

		if(nums1[l1] < nums2[l2]) {
			ans.push_back(nums1[l1]);
			l1++;
		}
		else if(nums1[l1] > nums2[l2]) {
			ans.push_back(nums2[l2]);
			l2++;
		}
	}
	if(l1 == n1) {
		for(int i=l2; i<n2; i++) {
			ans.push_back(nums2[i]);
		}
	}
	else if(l2 == n2) {
		for(int i=l1; i<n1; i++) {
			ans.push_back(nums1[i]);
		}
	}
	cout << l1 << " " << l2 << endl; 

	for(auto x: ans) {
		cout << x << " ";
	}
   return 0;
}