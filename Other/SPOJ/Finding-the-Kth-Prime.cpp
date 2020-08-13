
/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define CPS             CLOCKS_PER_SEC
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
#define ll              long long int
#define pb              push_back
#define mp              make_pair
#define inf             1e18
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

//Initializing Boolean Globally because
// It initializes with 0 values then
// rather than storing Garbage values
// Also bool takes 1 bit and whereas int
// takes 4 bits, Ss taking bool in order to
// Avoid TLE!!!
bool a[90000001];


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

	vi primes;
	// Assumption by hit and Trial Method
	int b = 90000000;

	a[0] = a[1] = true;
	for (int i = 2; i * i <= b ; i++) {
		if (!a[i]) {
			for (int j = i * i; j <= b; j += i)
				a[j] = true;
		}
	}

	for (int i = 2; i <= b; i++)
	{
		if (!a[i]) {
			primes.pb(i);
		}

	}

	w(x) {

		int k;
		cin >> k;

		cout << k << " ";
		cout << primes[k - 1] << endl;
	}
	return 0;
}

