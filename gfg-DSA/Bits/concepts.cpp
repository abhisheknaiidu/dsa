// 1 - check if k-th bit is set:
// if(x & 1<< (k-1 )!= 0) ==> bit is set

// 2- Check for power of 2:
// if ( x & (x-1) == 0) ==> it is power of 2
// Except x = 0, for all other cases, it works:

// 3- Counting Set Bits: by Brian Kernighan's Algorithm
// we need to first pop number's first rightmost set bit, like:
// 1010100, it should be first converted to 1010000.
// but how? we use the logic like this=> x= x & (x-1)
// then increment the count.

// 4- Check which element occurs in odd times (or duplicate element)
// where as other occur's at  even times
// Use XOR in the entire array.

// 5- Extension of 4, when 2 numbers occurs in odd times:
// check 2-duplicate.cpp 

// 6- Generate Power Set:
// i/p = "abc" ,  o/p = ['', 'a', 'b', 'c', 'ab', 'ac', 'bc', 'abc']
// int count = (1<<n) ==> 2^n
// for(i=0; i<count ; i++) {
// 	for(j=0; i<n; j++) {
//       if((1 & (j-1)) > 0) => kth bit is set
//       cout << str[j];
// 	}
// cout << endl
// }

// 7- count the max number of consecutive 1's.
// i/p = 1110000111110   o/p = 5
