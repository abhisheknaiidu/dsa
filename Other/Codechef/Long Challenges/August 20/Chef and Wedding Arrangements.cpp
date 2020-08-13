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

w(x) {
	lli n,k;
	in n >> k;
	vector <lli> v(n);
	unordered_set<lli> hash;
	for (lli i = 0; i < n; ++i)
	{
		in v[i];
	}

	unordered_map <lli, lli> m;

	lli count = 1;
	for (lli i = 0; i <v.size(); ++i)
	{
		if(hash.find(v[i]) != hash.end()) {
			count++;
			// cout << endl;
			// cout << v[i];
		}
		// m[mi].pb(v[i]);
		else if(hash.find(v[i]) == hash.end()) {
			hash.insert(v[i]);
			// cout << v[i];
		}
		m[v[i]]++;
	}

	// cout << m.size();

	lli sum=0;
	// lli ch=0;
	bool dup = true;
	for (auto x: m)
	{
		if(x.second > 1) {
			// ch++;
			// sum++;
			sum+=x.second;
		}
		else if(x.second == 1) {
			dup=false;
		}
		// cout << x.first << " " << x.second << endl;
	}

	// cout << ch;

	lli a1 = count*k;
	lli a2 = k + (dup ? sum - 1 : sum);
	lli op = min(a1,a2);
	cout << op << endl;

}


   return 0;
}




















