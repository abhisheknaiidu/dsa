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

template <typename T>
class Graph {
	unordered_map <T, vector<T> > m;

public:
	void addEdge(int u, int v) {
		m[u].push_back(v);
		m[v].push_back(u);
	}

	void dfs_helper(T src, unordered_map<T, bool> &visited) {
		cout << src << " ";
		visited[src] = true;
		// visit all neightbours of src
		for(auto nbr: m[src]) {
			if(!visited[nbr]){
				dfs_helper(nbr, visited);
			}
		}
	}

	void dfs(T src) {
		unordered_map <T, bool> visited;
		for( auto p: m) {
			T node = p.first;
			visited[node] = false;
		}
		dfs_helper(src, visited);

	}

	// void print() {
	// 	for(int i=0; i<V; i++) {
	// 		cout << i << "->";
	// 		for( auto x: adjList[i]) {
	// 			cout << x << ",";
	// 		}
	// 		cout<< endl;
	// 	}
	// }
};

int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Graph <int> g;
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(2,3);


	g.dfs(0);


   return 0;
}