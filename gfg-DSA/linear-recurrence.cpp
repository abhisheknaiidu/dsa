// Linear Recurrence Method for calculating high order numbers like
// F(100) in fibonacci series.
// Steps to Proceed :
// Step 1: Determine K, the number of terms F(i) depends.
// Ex- K=2 for fibonacci series i.e F(i) = F(i-1) +F(i-2)
// Step: 2 Determine initial values i.e F(1) and F(2)
// Ex- In fibonacci series, F(1) = 1, F(2) = 1
// Define a column vector Fi as a K X 1 Matrix
// Step: 3 Determine Transformation Matrix
// Where T is a K x K matrix whose last row is a vector [Ck , Ck-1 .... c1] === F(1) , F(2) ... 
// Note: the ith row is a zero vector except that its (i+1)th element is 1!
// Step: 4 Determine Fn i.e F2=F1*T ==> Fn = T^n-1 * F1
// Computing T^n-1 efficiently can be done in O(lgn) and Multyplying takes O(K^3) ==> O(K^3lgn)
//



#include <iostream>
#include <vector>
#define REP(i,n) for (int i = 0; i < n; i++) 
using namespace std;
typedef long long ll;
typedef vector < vector <int> > matrix; // Initializing 2D Array
const ll MOD = 1000000007;
const int K=2;


// Computes A * B
matrix mul(matrix A, matrix B) {
    matrix C(K+1, vector <ll> (K+1));
    REP(i,K) REP(j,K) REP(k,K)
        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
    return C;
}


// Computes A^p
matrix pow(matrix A, int p) {
    if( p==1) return A;
    if( p%2 ) {
        return mul(A, pow(A,p-1));
    }
    matix X = pow(A, p/2);
    return mul(X,X);
}


int fib(n) {
	
	// Create Vector F1
	vector <ll> F1(K+1);
	// Initialize F1 and F2 , if given
	F[1] = 1;
	F[2] = 1;
	
	// Create Matrix T
	matrix T(K+1, vector <ll> (K+1));
	T[1][1] = 0, T[1][2] = 1;  
	T[2][1] = 1, T[2][2] = 1;
	
	// Raise T to the power n-1
	if( N == 1 ) {
	    return 1;
	}
	T = pow(T,N-1);
	
	// result will the first row of T*F1
	ll result = 0;
	REP(i,k)
	    result = (result + T[1][i] * F1[i]) % MOD
	return result;
}
