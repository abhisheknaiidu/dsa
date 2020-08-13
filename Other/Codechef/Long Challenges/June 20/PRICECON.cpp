
/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define all(n)          n.begin(),n.end()
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define f               first
#define s               second
#define int              long long int
#define pb              push_back
#define mp              make_pair
#define inf             1e18
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;




int32_t main()
{

	w(x) {
		int n, k;
		cin >> n >> k;
		vi a(n, 0);
		int sum1 = 0;
		for (int i = 0; i < n ; i++) {
			cin >> a[i];
			sum1 += a[i];
		}
		sort(a.begin(), a.end());
		int lol = 0;
		while (a[lol] < k) lol++;

		int sum2 = 0;
		if (lol > n) sum2 = sum1;

		else {
			sum2 = sum1;
			for (int i = lol; i < n; i++) {
				sum2 -= a[i] - k;
			}
		}
		cout << sum1 - sum2 << endl;
	}
	return 0;
}

