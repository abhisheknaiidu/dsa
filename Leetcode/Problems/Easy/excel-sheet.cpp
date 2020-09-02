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

	map <int, char> m;
	string s = "ZZY";
	char c ='A';
	for (int i = 1; i <= 26; ++i)
	{
		m.insert({i,c});
		c++;
	}

	vector<int> v;

	for (int i = 0; i < s.size(); ++i)
	{
		for (auto x: m)
		{
			if(x.second == s[i]) v.push_back(x.first);
		}
	}

	int res = 0;
	// res = pow(26,6)*v[6] + pow(26,5)*v[5] + pow(26,4)*v[4] + pow(26,3)*v[3] + pow(26,2)*v[2] + pow(26,1)*v[1] + pow(26,0)*v[0] ;

    int n = v.size() - 1;
	for (int i = 0; i < v.size(); ++i)
	{
		res += pow(26,n)*v[i];
		n--;
	}

	cout << res;

   return 0;
}

// Simply :

        // int n = s.size();
        
        // int ans = 0;
        // for (int i =0 ; i < n ; i++)
        // ans += (s[i] - 'A' + 1) * pow(26, n - i - 1);
   
        // return ans;

