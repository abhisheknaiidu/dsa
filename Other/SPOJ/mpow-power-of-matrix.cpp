// https://www.spoj.com/problems/MPOW/



/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define all(n)          n.begin(),n.end()
#define REP(i,n)        for (int i=1; i<=n; i++)
// #define REP(i,a,b)      for (int i=a; i<=b; i++)
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

int a[N][N] , I[N][N];

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void mul(int A[][N], int B[][N], int dim) {

	int res[dim + 1][dim + 1];

	REP(i, dim) {
		REP(j, dim) {
			res[i][j] = 0;
			REP(k, dim) res[i][j] += A[i][k] * B[k][j] % mod;
		}
	}

	// But we do need it in res, we need it in I,
	// which is equal to A[][N] here

	REP(i, dim) REP(j, dim) A[i][j] = res[i][j] % mod;
}

void power(int A[][N], int dim, int n) {

	// Initializing Identity Matrix of
	// Size dim.
	REP(i, dim) REP(j, dim)
	{
		if ( i == j) I[i][j] = 1;
		else        I[i][j] = 0;
	}

	// This takes time O(M3 * N) => Gives TLE (Naive Approach)
	// REP(i, n)
	// // I = I*A,but in matrix, multiply does not work in this way.
	// mul(I, A, dim);

	// Optimized Approach, TC  => O(M3 * logN)
	while (n) {
		if (n % 2)
			mul(I, A, dim), n--;

		else
			mul(A, A, dim), n /= 2;
	}




	// Now the changes are present in I
	// but we want it in arr a!
	REP(i, dim) REP(j, dim) A[i][j] = I[i][j];

}

void printMat(int A[][N], int dim) {
	REP(i, dim) {
		REP(j, dim) {
			cout << A[i][j] % mod << ' ' ;
		}
		cout << endl;
	}
}

int32_t main()
{
	abhisheknaiidu();

	w(x) {
		int dim, n;
		cin >> dim >> n;

		REP(i, dim) REP(j, dim) cin >> a[i][j];

		power(a, dim, n);
		printMat(a, dim);
	}


	return 0;
}

