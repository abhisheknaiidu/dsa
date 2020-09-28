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

	vector <int> nums1{4,9,5};
	vector <int> nums2{9,4,9,8,4};
	map <int, int> m1;
	map <int, int> m2;
	set<int> s;

	for(auto x: nums1) {
		s.insert(x);
		if(!m1.count(x)) {
			m1.insert(make_pair(x,1));
		}
		else {
			m1[x]++;
		}
	}

	for(auto x: nums2) {
		s.insert(x);
		if(!m2.count(x)) {
			m2.insert(make_pair(x,1));
		}
		else {
			m2[x]++;
		}
	}
	vector<int> ans;

	for(auto x: s) {
		int c1 = m1.count(x) ? m1[x] : 0;
		int c2 = m2.count(x) ? m2[x] : 0;
		int cnt = min(c1,c2);


		for(int i=0; i<cnt; i++) ans.push_back(x);
	}


	//Using set_intersection

	int n = nums1.size() < nums2.size() ? nums1.size() : nums2.size();
    vector<int> ans(n);

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int>::iterator it;
    it = set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), ans.begin());
    ans.resize(it - ans.begin());


   for(auto x: ans) {
   	cout << x << endl;
   }
   return 0;
}