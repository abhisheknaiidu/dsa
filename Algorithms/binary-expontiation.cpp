
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
#define int             long long int
#define pb              push_back
#define mp              make_pair
#define inf             1e18
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	abhisheknaiidu();

	// calculating a^n in log(n) time
	int a, n;
	cin >> a >> n;

	int res = 1;

	while (n) {

		if (n % 2) {
			res *= a;
			n--;
		}

		else {
			n /= 2;
			a *= a;
		}
	}

	cout << res;

	return 0;
}

