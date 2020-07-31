/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/
#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <cstdlib> 
#include <exception>
#include <fstream>
#include <functional>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <tuple>
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
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define ll long long 
#define all(n)          n.begin(),n.end()
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define w(x)            int x; cin>>x; while(x--)
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define pb              push_back
#define mp              make_pair
#define lli             long long int
#define inf             1e18
#define w(x)            int x; cin>>x; while(x--)
#define out cout<<
#define in cin>>
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


	int arr[] = {3,4,5,4,5,6};

	int n = sizeof(arr) / sizeof(arr[0]);
	int res=0;
	for(int i=0; i<n ; i++) {
		res = res^arr[i];
		// out arr[i] << " " << res << endl;
	}
	// check for rightmost kth set bit
	int i=0;
	int temp = res;
	while(temp) {
		if(temp & 1) {
			break;
		}
		i++;
		temp = temp >> 1;
	}

	// create a mask to check in the array
	int mask = 1 >> i;
	int first=0;
	for (int i = 0; i < n; ++i)
	{
		if((mask & arr[i]) != 0 ) {
			// out arr[i] << " ";
			first^=arr[i];
		}
	}

	int second = first^res;
	out first << " " << second;
   return 0;
}




















