class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size();
        int count=0, smallLetter=0, firstLetter=0;
        for(int i=0; i<len; i++) {
            if(word[i]>='A' & word[i]<='Z') {
                count++;
                cout << count << endl;
                if(count == len) return true;
                continue;
            } 
            else if(word[i]>='a' & word[i]<='z') {
                smallLetter++;
                if(smallLetter == len) {
                    return true;
                }
                else if(count > 1) {
                    break;
                }
                else if(word[0]>='A' & word[0]<='Z') {
                firstLetter++;
                if(firstLetter == len-1) {
                    return true;
                }
                }
                continue;
            }
      }
     return false;
   }
};

//Optimized Solution :

class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size();
        int count=0, location;
        for(int i=0; i<len; i++) {
            if(word[i]>='A' & word[i]<='Z') {
                count++;
                location = i;
                continue;
            }
      }
        if(count == len || count==0 || (count==1 && location==0)) {
                return true;
            }
     return false;
   }
};