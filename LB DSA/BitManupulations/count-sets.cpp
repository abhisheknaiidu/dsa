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

// complexity ==> log(n)
// int countSets(int n) {
// 	int count = 0;
// 	while(n) {
// 		n = n & (n-1);
// 		count++;
// 	}
// 	return count;
// }

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	// int n = 4;
	// int ans = 0;
	// for(int i=1; i<=n; i++) {
	// T.C => O(nlog(n))
	// 	ans += countSets(i);
	// }

	// cout << ans << endl;

	// Better Approach 🔥 T C => O(log(N))
	int n = 30;
	n++;
	int ans = n/2;
	int power2 = 2;
	while(power2 <= n) {
		// pair's consisting of 0 and 1.
		int totalPairs = n / power2;
		// counting 1's.
		ans += (totalPairs/2) * power2;
		// cout << (totalPairs/2) * power2 << endl;

		ans += (totalPairs & 1) ? (n % power2) : 0;
		power2 <<= 1;
	}
	cout << ans << endl;

	// or
	// Base case: Number of set bits in 0 and 1 are 0 and 1 respectively.
    // Now for every element i from the range [2, N], if i is even then it will have the same number of set bits as i / 2
    // because to get the number i we just shift the number i / 2 by one. While shifting, the number of set bits does not change.
    // Similarly, if i is odd then it will have 1 additional set bit at 0th position than i – 1 which was even.

    // int cnt = 0; 
  
    // To store the count of set 
    // bits in every integer 
    // vector<int> setBits(n + 1); 
  
    // 0 has no set bit 
    // setBits[0] = 0; 
  
    // 1 has a single set bit 
    // setBits[1] = 1; 
  
    // For the rest of the elements 
    // for (int i = 2; i <= n; i++) { 
  
        // If current element i is even then 
        // it has set bits equal to the count 
        // of the set bits in i / 2 
    //     if (i % 2 == 0) { 
    //         setBits[i] = setBits[i / 2]; 
    //     } 
  
        // Else it has set bits equal to one 
        // more than the previous element 
    //     else { 
    //         setBits[i] = setBits[i - 1] + 1; 
    //     } 
    // } 
  
    // Sum all the set bits 
    // for (int i = 0; i <= n; i++) { 
    //     cnt = cnt + setBits[i]; 
    // } 



   return 0;
}