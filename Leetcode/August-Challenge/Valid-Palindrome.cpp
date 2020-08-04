class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0) return 1;
        int l=0, h=s.size();
        for(int i=0; i<h ; i++) {
            s[i] = tolower(s[i]);
            // cout << s[i];
        }
        cout << h << endl;
        while(l<=h) {
            if(!((s[l] >= 'a' && s[l]<= 'z') || (s[l]>='0' && s[l]<='9'))) {
                l++;
            }
            else if(!((s[h] >= 'a' && s[h]<= 'z') || (s[h]>='0' && s[h]<='9'))) {
                h--;
            }
            else if(s[l] == s[h]) {
                cout << l << " " << h;
                cout << s[l] << " " << s[h];
                l++;
                h--;
            }
            else {
                return false;
            }
        }
    return true;
    }
};