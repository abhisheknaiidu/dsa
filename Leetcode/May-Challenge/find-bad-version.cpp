// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    
public:
    int firstBadVersion(int n) {
        
        int startVersion = 1, endVersion = n;
        int mid;
        while(start <= end) {
            mid = startVersion + (endVersion - startVersion) / 2;
            
            
            if(!isBadVersion(mid)) {
                startVersion = mid + 1;
            }
            
            else {
                endVersion = mid - 1;
            }
        }
        return startVersion;
    }
};
