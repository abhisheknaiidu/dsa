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


// bool isPallindrome(string sub) {
// 	int r = sub.size()-1;
// 	int l = 0;
// 	while(l<r) {
// 		if(sub[l] != sub[r]) return false;

// 		r--;
// 		l++;
// 	}
// 	return true;
// }

vector<int> getLongestPalindrome(string str, int left, int right) {
	while(left>=0 && right <= str.length()) {
		if(str[left] != str[right]) break;

		left--;
		right++;
	}
	return vector<int>{left+1, right};
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	// string str = "abaxyzzyxf";
	// string longest = "";

	// for(int i=0; i<str.size(); i++) {
	// 	for(int j=i; j<str.size(); j++) {
	// 		string sub = str.substr(i,j+1-i);
	// 		for(auto x: sub) {
	// 			cout << x;
	// 		}
	// 		cout << endl;
	// 		if(sub.length() > longest.length() && isPallindrome(sub)) {
	// 			longest = sub;
	// 		}
	// 	}
	// }

	// cout << longest << endl;

    string str = "abaxyzzyxf";


    vector<int> currentLongest{0,1};
    for(int i=1; i<str.length(); i++) {
    	vector<int> odd = getLongestPalindrome(str, i-1, i+1);
    	vector<int> even = getLongestPalindrome(str, i-1, i);

    	vector<int> longest = odd[1] - odd[0] > even[1] - odd[0] ? odd : even;

    	currentLongest = currentLongest[1] - currentLongest[0] > longest[1] - longest[0] ? currentLongest : longest;  	
    }

     //    for(auto x: currentLongest) {
    	// 	cout << x << endl;
    	// }
    	// cout << endl;
    	// copy elements from main string.
    	string ans = str.substr(currentLongest[0], currentLongest[1] - currentLongest[0]);
    	cout << ans << endl;






   return 0;
}