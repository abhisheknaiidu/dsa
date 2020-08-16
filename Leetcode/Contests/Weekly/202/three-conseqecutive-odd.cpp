class Solution {
public:
// Sliding Window Tehnique
    bool threeConsecutiveOdds(vector<int>& arr) {
        int k=3;
        int n = arr.size();
        int j=0, sum=0;
        vector<int> v(n,0);
        for(int i=0; i<n; i++) {
            if(arr[i] % 2 == 1) {
                v[i] = 1;
                sum+=v[i];
            }
            if(i>=k-1) {
                if(sum == 3) return true;
                sum = sum-v[j];
                j++;
            }

        }
        return false;
    }
};

// OR Just One Step Solution

// for(int i=0; i+2<n; i++) {
//     if(arr[i]%2 && arr[i+1]%2 && arr[i+2]%2) return true;
// } 