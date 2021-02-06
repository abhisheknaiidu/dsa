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

	vector<int> A{3,3,4};
	vector<int> B{3,3,4};
	vector<int> C{3,3,4,3};
	int i =0, j=0, k=0;
	vector<int> v;
	int n1 = A.size();
	int n2 = B.size();
	int n3 = C.size();
	unordered_set <int> s;
    vector<int> ans;

	while(i < n1 && j < n2 && k < n3) {
		if(A[i] == B[j] && B[j] == C[k]) {
			if(s.find(A[i]) == s.end()) {
				s.insert(A[i]);
			    ans.push_back(A[i]);
			}
			i++;
			j++;
			k++;
		}
		else if(A[i] < B[j]) {
			i++;
		}
		else if(B[j] < C[k]) {
			j++;
		}
		else {
			k++;
		}
	}
	cout << s.size() << endl;

	for(auto x: ans) cout << x << " ";

   return 0;
}