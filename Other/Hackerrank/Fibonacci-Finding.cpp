//https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem


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

int a[3];
int I[3][3], T[3][3];

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void mul(int A[3][3], int B[3][3], int dim) {

	int res[dim + 1][dim + 1];

	REP(i, 1, dim) {
		REP(j, 1, dim) {
			res[i][j] = 0;
			REP(k, 1, dim) {
				res[i][j] += (A[i][k] * B[k][j]) % mod;
			}
		}
	}

	REP(i, 1, dim) REP(j, 1, dim) A[i][j] = res[i][j] % mod;
}

int getfib(int n) {

	if (n <= 2) return a[n];

	// Initializing the Indentity Matrix
	I[1][1] = I[2][2] = 1;
	I[1][2] = I[2][1] = 0;

	// Initializig the transitive matrix
	T[1][1] = 0;
	T[1][2] = T[2][2] = T[2][1] = 1;

	n = n - 1;

	// Calculating T^n-1 in log(n) time
	while (n) {
		if (n % 2)
			mul(I, T, 2), n--;

		else
			mul(T, T, 2), n /= 2;
	}

	int ans = (a[1] * I[1][1] + a[2] * I[2][1]) % mod;

	return ans;
}

int32_t main()
{
	abhisheknaiidu();


	w(x) {
		int n;
		cin >> a[1] >> a[2] >> n, n++;
		cout << getfib(n) << endl;
	}

	return 0;
}

