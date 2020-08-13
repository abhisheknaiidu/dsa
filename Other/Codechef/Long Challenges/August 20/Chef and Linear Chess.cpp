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

bool compare(pair <lli, lli> p, pair <lli, lli> q )

{

    return p.second < q.second;

}

int main(int argc, char* argv[]) {
	abhisheknaiidu();



w(x) {
	lli n,k,p;
	cin >> n >> k;
	vi v;
	for(lli i=1; i<=n; i++) {
		cin >> p;
		v.pb(p);
	}

	unordered_map <lli, lli> m;
	// cout << k << endl;
	for (lli i = 0; i < v.size(); ++i) 
	{
		lli count = 0;
		lli sum = v[i];
		if(v[i] == k) {
			m[v[i]] = 0;
		}
		while(1) {
			sum+=v[i];
			count++;
			if(sum == k) {
				m[v[i]] = count;
				// cout << count << endl;	
				// c.insert(itPos, count);
				break;
			}
			else if(sum > k) {
				break;
			}
		}
	}

	if(m.empty()) {
		cout << "-1" << endl;
	}

	else {
	pair <lli, lli> l;

    l = *min_element(m.begin(), m.end(), compare);

    cout << l.first << endl;
	}




//     lli min = m[0];
//     for (auto x: m) {
//         // cout << pair.first << " " << pair.second << endl;
//         if (x.second < min) {
//             min = x.second;
//         }
//     }
//     cout << m[min] << endl;
// }

}

   return 0;

}




















