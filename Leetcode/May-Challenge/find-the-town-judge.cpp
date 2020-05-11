class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
    
        if(N == 1) {
            return 1;
        }
        vector<int> nums(N+1, 0);
        
        for(int i = 0;i<trust.size();i++)
        {
            //All the outcoming ones!
            nums[trust[i][0]]--;
            // All the Incoming ones!
            nums[trust[i][1]]++;
        }
        
        for(int i = 0 ; i<= N ;i++)
        {
            if( nums[i] == N-1)
                return i;
        }
        return -1;
    }
};
