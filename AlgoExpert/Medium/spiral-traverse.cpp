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

// T.C: O(N), where N is the total number of elements in the input matrix.
// S.C : O(1) without considering the output array, since we don't use any additional data structures for our computations.
// and O(N) if the output array is taken into account.


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	vector< vector<int>> mat{ {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int T = 0, B = mat.size() - 1, L = 0, R = mat[0].size() - 1;
	int dir = 0, i;

	// cout << R << endl;
	while( T<=B && L<=R) {
	if(dir == 0) {
		for(i=L; i<=R; i++) {
			cout << mat[T][i] << endl;
		}
		T++;
		// dir = 1;
	}
	else if(dir == 1) {
		for(i=T; i<=B; i++) {
			cout << mat[i][R] << endl;
		}
		R--;
		// dir = 2;
	}
	else if(dir == 2) {
		for(i=R; i>=L; i--) {
			cout << mat[B][i] << endl;
		}
		B--;
		// dir = 3;
	}
	else if(dir == 3) {
		for(i=B; i>=T; i--) {
			cout << mat[i][L] << endl;
		}
		L++;
		// dir = 0;
	}
	dir = (dir+1) % 4;
	}


   return 0;
}




