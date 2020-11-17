// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         if( n == 0) return 0;
//         vector <int> cnt(400,0);
//         int i(0), j(0);
//         // cout << i << j;
//         cnt[s[0]]++;
//         int ans=1;
//         while(j!=n-1) {
//             if(!cnt[s[j+1]]) {
//                 j++;
//                 cnt[s[j]]++;
//                 ans = max(ans, j-i+1);
//                 cout << ans<< endl;
//             }
//             else {
//                 cnt[s[i]]--;
//                 i++;
//             }
//         }
//         return ans;
//     }
// };

// Using Set : 

#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void abhisheknaiidu()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int main(int argc, char* argv[]) {
    abhisheknaiidu();

    string s = "bbbbbb";
    int ans = 0;
    int n = s.length();
    if(n == 0) cout << "0" << endl;
    set <int> set;
    set.insert(s[0]);
    int end = 0;
    for(int start=0; start<n; start++) {
        while( end + 1 < n && !set.count(s[end+1])) {
            end++;
            set.insert(s[end]);
        }
        ans = max(ans, end - start + 1);
        cout << ans << endl;
        set.erase(s[start]);
    }

    for(char x: set) cout << x << " ";

    cout << ans << endl;
   return 0;
}