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

// Sieve of eratosthenes
// T.C - O(nloglogn + n) ==> O(nloglogn)
int main(int argc, char* argv[]) {
	abhisheknaiidu();

	int num = 10;

	if(num == 0) return 0;
	if(num == 1) return 1;

	vector<int> primes(num, 1);
	for(int i=2; i*i<num; i++) {

		if(primes[i]) {
			for (int j = i; i*j < primes.size(); j++)
			{
				primes[i*j] = 0;
			}
		}
	}

	for(int i=2; i<num; i++) {
		if(primes[i]) cout << i << " ";
	}


   return 0;
}