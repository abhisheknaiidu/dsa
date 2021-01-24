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

const int N = 1e5;
#define SIEVE
vector<int> pr(N,1);
vector<int> primes;
// cout << pr[0] << endl;
pr[0] = 0;
pr[1] = 0;
void sieve() {
    for(int i=2; i*i<N; i++) {
		if(pr[i] == 1) {
			for(int j=i*i; j<N; j+=i) {
				pr[j] = 0;
			}
		}
	}
	for(int i=0; i<N; i++) {
		if(pr[i] == 1) {
			primes.push_back(i);
		}
	}
}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	int t;
	cin >> t;

	while(t--) {
		int d;
		cin >> d;
		int x = *upper_bound(primes.begin(), primes.end(), d+1);
	    int y = *upper_bound(primes.begin(), primes.end(), x + d -1);
	    cout << x*y << endl;
	}



	

   return 0;
}