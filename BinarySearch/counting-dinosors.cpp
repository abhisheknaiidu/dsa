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

	string animals = "abacabC";
	string dinosaurs = "bC";
	int arr[128] = {0};
	int ans=0;
	for(char c : animals) {
		arr[c]++;
	}
	// cout << arr[97] << endl;
	for(char c :  dinosaurs) {
		if(arr[c]) {
			ans += arr[c];
			arr[c] = 0;
		}
	}
	cout << ans << endl;
   return 0;
}