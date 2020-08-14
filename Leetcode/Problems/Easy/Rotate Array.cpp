class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int a[n];
        for(int i=0; i<n; i++) {
            a[(i+k) % n] = nums[i];
            cout << (i+k) % n << " ";
        }
        for(int i=0; i<n; i++) {
            nums[i] = a[i];
        }
    }
};

// OR


class Solution {
public:
    void reverse(vector <int> &nums, int s, int e) {
        while(s<e) {
            int t = nums[s];
            nums[s] = nums[e];
            nums[e] = t;
            s++;
            e--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
    }
};

