class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n);
        reverse(s.begin(),s.end());
        int j=0;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            j++;
            if(j==4)
            {
                ans+=".";
                j=1;
            }
            
            ans+=s[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};