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