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

int countComponents(int n,vector<pair <int,int>>& edges) {
	vector <bool> visited(n, false);
	vector<vector <int>> adjList(n, vector<int> (0));

	// building graph
	for( auto edge: edges) {
		int from = edge.first;
		int to = edge.second;

		adjList[from].push_back(to);
		adjList[to].push_back(from);
	}

	int res = 0;
	stack <int> dfs;

	// Traversing in dfs fashion, to check for connected nodes

	for(int i=0; i<n; i++) {
		if(!visited[i]) {
			dfs.push(i);
			res++;

			while(!dfs.empty()) {
				int cur = dfs.top();
				dfs.pop();
				visited[cur] = true;

				for( auto nbr: adjList[cur]) {
					if(!visited[nbr]) dfs.push(nbr);
				}
			}
		}
	}

		return res;
	}

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	int n = 5;
	vector<pair <int, int> >edges{{0, 1}, {1, 2}, {2, 3}, {3,4}};
	cout << countComponents(n, edges);

   return 0;
}