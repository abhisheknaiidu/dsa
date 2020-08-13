
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

int a[1000001];
int pp[1000001];

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



void ispp() {

	int max = 1000000;



	for (int i = 2; i <= max; i++) a[i] = 1;

	a[0] = a[1] = 0;

	for (int i = 2;  i * i <= max; i++)
	{
		if (a[i]) {
			for (int j = i * i; j <= max ; j += i)
			{
				a[j] = 0;
			}
		}
	}

	int count = 0;
	for (int i = 1; i <= max; ++i)
	{
		if (a[i]) count++;

		if (a[count])
			pp[i] = 1;

		else
			pp[i] = 0;
	}

	// Taking cummalative sum in order to
	// avoid TLE
	// Useful if we want to take the sum
	// from L to R
	for ( int i = 1; i <= max; i++) {
		pp[i] += pp[i - 1];
	}
}


int32_t main()
{
	abhisheknaiidu();
	ispp();

	w(x) {

		int L, R;

		cin >> L >> R;


		// Now the answer can be given in constant time!
		int count = pp[R] - pp[L - 1];

		cout << count << endl;

	}


	return 0;
}

