// Sol 1 Recursive - 
// T.C - O(2^N)
// S.C - O(N)

using namespace std;

int getNthFib(int n) {
	if(n == 1) return 0;
	if(n == 2) return 1;
	
  return getNthFib(n-1) + getNthFib(n-2);
}

// Sol 2 Memoization - Avoiding Duplicates:
// T.C - O(N)
// S.C - O(N)

#include <unordered_map>
using namespace std;

int getNthFib(int n) {

  unordered_map<int, int> memoize({{1, 0}, {2, 1}});

  return helper(n, memoize);
}
int helper(int n, unordered_map<int, int> &memoize) {

  if (memoize.find(n) != memoize.end()) {

    return memoize[n];

  } else {
    memoize[n] = helper(n - 1, memoize) + helper(n - 2, memoize);
   
    return memoize[n];
  }
}


// Sol - 3 Iterative Best Among All
// T.C - O(N)
// S.C - O(1)

using namespace std;

int getNthFib(int n) {
	int arr[] = {0,1};
	int next;
	for(int i=3; i<=n; i++) {
		next = arr[0] + arr[1];
		arr[0] = arr[1];
		arr[1] = next;
	}
	
	return n>1 ? arr[1] : arr[0];
}

