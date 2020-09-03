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

	string s = "leetcode";
    vector<int> v(26, 0);
        
    for(int i=0;i<s.size();i++) {
    	v[s[i] - 'a']++;
    }
    for (int i = 0; i<s.size(); ++i)
    {
    	if(v[s[i] - 'a'] == 1) return i;
    }

    return -1;
}