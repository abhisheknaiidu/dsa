#pragma GCC optimize("Ofast")
#include <algorithm>
#include <bitset>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <map>
#include <queue>
#include <sstream>
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

	string version1 = "0.1";
	string version2 = "1.1";

	// v1.erase(remove(v1.begin(), v1.end(), '.'), v1.end());
	// v2.erase(remove(v2.begin(), v2.end(), '.'), v2.end());

	vector<int> v1,v2;

	istringstream check1(version1),check2(version2);
	string tmp;
	while(getline(check1, tmp, '.')) v1.push_back(stoi(tmp));
	while(getline(check2, tmp, '.')) v2.push_back(stoi(tmp));

	v1.size()>v2.size() ? v2.resize(v1.size()) : v1.resize(v2.size());

	for(int i=0; i<v1.size(); i++) {
		if(v1[i] > v2[i]) cout << "1";
		else if(v1[i] < v2[i]) cout << "-1";
	}

	cout << "0";


   return 0;
}