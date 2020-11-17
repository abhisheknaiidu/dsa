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

	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		vector<int> v;
		for(int i=0; i<n; i++) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		int l=0,r=0,sum=0,ans = INT_MAX;
		for(int i=0; i<n; i++) {
			sum += v[i];
			if(sum < x) {
				r++;
			}
			else if(sum > x) {
				while(sum > x){
					sum -= v[l];
					l++;
				}
				break;
			}
		}
	    cout << l << " " << r << endl;
		ans = r - l + 2;
		cout << ans << endl;
	}

   return 0;
}