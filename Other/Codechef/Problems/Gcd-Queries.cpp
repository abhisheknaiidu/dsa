// https://www.codechef.com/problems/GCDQ


/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define all(n)          n.begin(),n.end()
#define REP(i,a,n)      for (int i=a; i<=n; i++)
#define N               101
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

int pre[100005], suf[100005];
int a[100001];

// STEP 1
// Approach to solve this problem -
// To answer the query L to R
// find out GCD of elements 1 to L-1 = g1
// then find out the GCD of elements from
// R+1 to N = g2
// Answer will be now = GCD(g1,g2)

// STEP 2
// Prepare prefix and suffix array
// Pre[] = array to store gcd of first i elements at pos i
// Pre[i] = gcd(a[1],a[2],... a[i])
// Suf[] = array to store gcd of elements from i to N
// Suf[i] = gcd(a[i], a[i+1] .... a[N])


void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int gcd(int a, int b) {
	if (b == 0) return a;


	return gcd(b, a % b );
}


int32_t main()
{
	abhisheknaiidu();

	w(x) {
		int n, q;
		cin >> n >> q;

		REP(i, 1, n) cin >> a[i];

		pre[0] = suf[n + 1] = 0;

		// to initialize prefix array
		REP(i, 1, n) pre[i] = gcd(pre[i - 1], a[i]);

		// to inialize suffix array
		for (int i = n; i >= 1; i--)
			suf[i] = gcd(a[i], suf[i + 1]);

		while (q--) {
			int l, r;
			cin >> l >> r;

			cout << gcd(pre[l - 1], suf[r + 1]) << endl;
		}
	}

	return 0;
}

