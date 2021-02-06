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

	string text = "abcxabcdabcdabcy";
	string pattern = "abcdabcy";
	// Slow Method for patter searching => O(n * m)
	int i = 0;
	int j = 0;
	int k = 0;
	while(i < text.size() && j < pattern.size()) {
		if(text[i] == pattern[j]) {
			i++;
			j++;
		}
		else {
			j = 0;
			k++;
			i = k;
		}
	}
	if(j == pattern.size()) {
		cout << true << " " << k << endl;
	}
	else {
		cout << false << " " << k << endl;
	}

	// Compute temporary array to maintain size of suffix which is same as prefix
	// Time/space complexity is O(size of pattern)
	int n = pattern.size();
	vector<int> temp(n);
	int index = 0;
	for(int i=1; i<n;) {
		if(pattern[index] == pattern[i]) {
			temp[i] = index + 1;
			index++;
			i++;
		}
		else {
			if(index != 0) {
				index = temp[index-1];
				// cout << "i" << " " << index << " " << i << endl;
				// temp[i] = index+1;
			}
			else {
				temp[i] = 0;
				i++;
			}
		}
	}

	// KMP O(n + m) 🔥
	int i = 0;
	int j = 0;
	while(i<text.size() && j < pattern.size()) {
		if(text[i] == pattern[j]) {
			i++;
			j++;
		}
		else {
			if(j != 0) {
				j = temp[j-1];
			}
			else {
				// cout << j << endl;
				i++;
			}
		}
	}
	if(j == pattern.size()) {
		cout << true <<  endl;
	} else {
		cout << false << endl;
	}
	

   return 0;
}