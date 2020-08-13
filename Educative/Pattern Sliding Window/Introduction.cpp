//  Given an array, find the average of all contiguous subarrays of size ‘K’ in it.


#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
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


	vector <int> v{1, 3, 2, 6, -1, 4, 1, 8, 2};
    int n = v.size();
    int k=5;


	vector <double> res(n-k+1);

	int i=0;
	double sum=0;
	for(int j=0; j<n; j++) {
		sum+=v[j];
		if(j>=k-1) {
			res[i] = (sum/5);
			sum = sum - v[i];
			i++;
		}
	}

	// for (int i = 0; i <res.size(); ++i)
	// {
	// 	cout <<  res[i] << endl;
	// }



   return 0;
}