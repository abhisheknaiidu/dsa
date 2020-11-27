	class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int count = 0;
        unordered_map <int, int> m;
        int target;
        for(int i=0; i<n; i++) {
            m[arr[i]]++;
        }
        for(int i=0; i<n; i++) {
            count += m[k-arr[i]];
            if (k-arr[i] == arr[i]) 
            count--; 
        }
        return count/2;
    }
};
