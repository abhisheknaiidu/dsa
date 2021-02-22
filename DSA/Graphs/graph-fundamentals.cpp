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
// template <typename T>

using namespace std;

void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class Graph {
public:
	map<char, vector<pair<char, int>>> adjList;

	void addEdge(char u, char v, int dist, bool bidir = true) {
		adjList[u].push_back(make_pair(v, dist));
		if(bidir) {
			adjList[v].push_back(make_pair(u, dist));
		}
	}
	void printGraph() {
		for(auto n: adjList) {
			cout << n.first << " -> ";
			for(auto x: n.second) {
				cout << "(" << x.first << " , " << x.second << ")";
			}
			cout << endl;
		}

	}
	void bfs(char root) {
		map<char, bool> seen;
		queue<char> q;
		q.push(root);
		while(!q.empty()) {
			char cur = q.front();
			cout << cur << " ";
			q.pop();
			if(!seen[cur]) {
				seen[cur] = true;
			}
			for(auto x: adjList[cur]) {
				if(!seen[x.first]) {
					seen[x.first] = true;
					q.push(x.first);
				}
			}
		}
	}
	void dfs_helper(char src, map<char, bool> &seen) {
		seen[src] = true;
		cout << src << " -> ";

		for(auto x: adjList[src]) {
			if(!seen[x.first]) 
				dfs_helper(x.first, seen);
		}
	}
	void dfs(char src) {
		map<char, bool> seen;
		dfs_helper(src, seen);
	}
	void dfsIterative(char root) {
		map<char, bool> seen;
		stack<char> s;
		s.push(root);
		while(!s.empty()) {
			char cur = s.top();
			cout << cur << " -> ";
			s.pop();
			if(!seen[cur]) {
				seen[cur] = true;
			}
			for(auto x: adjList[cur]) {
				if(!seen[x.first]) {
					seen[x.first] = true;
					s.push(x.first);
				}
			}
		}
	}

};


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	Graph g;
	g.addEdge('A', 'B',4, 0);
	g.addEdge('B', 'D',5, 0);
	g.addEdge('J', 'D',4, 0);
	g.addEdge('A', 'J',6, 0);
	g.addEdge('A', 'G',3, 0);
	g.addEdge('G', 'F',2, 0);
	g.addEdge('G', 'E',9, 0);
	g.addEdge('F', 'I',8, 0);
	g.addEdge('E', 'I',10, 0);
	g.addEdge('I', 'H',11, 0);
	g.addEdge('F', 'H',5, 0);
	g.addEdge('D', 'H',6, 0);
	g.addEdge('H', 'C',7, 0);
	// g.addEdge('7', '6',0, 0);
	g.printGraph();
	g.bfs('A');
	cout << endl;
	g.dfs('A');
	cout << endl;
	g.dfsIterative('A'); // make sure it's bidirecive

   return 0;
}