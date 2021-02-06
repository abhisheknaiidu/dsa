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
	while(t--){
	    long n;
	    cin >> n;
	    long arr[n];
	    
	    for(long i=0; i<n; i++) {
	        cin >> arr[i];
	    }
	    long k,l;
	    for(k= n-2;k>=0; k--) {
	        if(arr[k] < arr[k+1]) {
	            break;
	        }
	    }
	    if(k == -1) {
	        reverse(arr, arr+n);
	    }
	    else {
	        for(l=n-1; l>=0; l--) {
	            if(arr[l] > arr[k]) {
	                break;
	            }
	        }
	        swap(arr[k], arr[l]);
	        reverse(arr + k + 1, arr + n);
	    }
	    for(auto x: arr) {
	        cout << x << " ";
	    }
	}

   return 0;
}