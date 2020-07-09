class Solution {
public:
    int tribonacci(int n, int a=0, int b=1, int c=1) {
        if(n==0) return a;
        if(n==1) return b;
        if(n==2) return c;
        // cout << a << " " << b << " " << c << " " << endl;
        return tribonacci(n - 1, b, c, a + b + c);   
    }
};

// OR , the solution which gives TLE:

public:
    int tribonacci(int n) {
        if(n<=1) return n;
        if(n==2) return 1;
        // cout << a << " " << b << " " << c << " " << endl;
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};


