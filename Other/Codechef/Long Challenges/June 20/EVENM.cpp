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
        int n;
        cin >> n;
        int numbers[n*n+1] = {0};

        for(int i=1; i<=n*n; i++) {
            numbers[i] = i;
        }
        // for(int i=1; i<n*n ; i++) {
        //     cout << numbers[i] << endl;
        // }
     
        vector <vector <int> > matrix;

        int count = 1;
        
        if(n%2 != 0) {
            for(int i=1; i<=n; i++) {

            vi abhishek;

            for(int i=1; i<=n; i++) {
                abhishek.pb(numbers[count++]);
            }

            matrix.pb(abhishek);
        }
    }

    else {
        for(int i=1; i<=n; i++) {
            vi abhishek;

            for(int i=1; i<=n; i++) {
                abhishek.pb(numbers[count++]);
            }
            if(i%2 == 0) {
                reverse(abhishek.begin(), abhishek.end());
                matrix.pb(abhishek);
            }
            else {
                matrix.pb(abhishek);
            }
        }
    }

    for (int i = 0; i <n; i++) { 
        for (int j = 0; j <n; j++) { 
            cout << matrix[i][j] << " "; 
        } 
        cout << "\n"; 
    } 

}
 return 0;
}
