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

	int arr[] = {7,10,4,3,20,15};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	priority_queue<int, vector<int>, greater<int>> minHeap;
	for(int i=0; i<n; i++) {
		minHeap.push(arr[i]);
		if(minHeap.size() > k) {
			minHeap.pop();
		}
	}
	while(!minHeap.empty()) {
		cout << minHeap.top() << endl;
		minHeap.pop();
	}

   return 0;
}