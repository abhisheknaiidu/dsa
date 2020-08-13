// Approach 1- Concatation:

// new = ""
// new += string[n-1]
// n--

// return new==string

// Space - O(n)
// Time - O(n^2) , because new is also iterating itself in the loop.


// Approach 2- Array/Vector:

// new = []
// new.append(string[n-1])
// n--

// string s(new)
// return s==string
// new.join => converts array into string in python

// Space - O(n)
// Time - O(n) 


// Approach 3- Recursion:

// return first==last && isPallindrome(mid);

// Space will be O(1)?, No that's not the case with recursion,because of call stacks it uses, => 0(n)
// It will be O(1), if it's a Tail Recursion(last line of the call), here there is no additional penalty.
// Time - O(n) 

// BEST WAY
// Approach 4- Pointers

// We can maintain 2 pointers l and r, which points to first and last character of a string initally, then we can compare l & r, if it's equal then increment,
// otherwise return false;

// Space - O(1)
// Time - O(n)