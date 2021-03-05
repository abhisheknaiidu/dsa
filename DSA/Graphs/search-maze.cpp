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

vector<vector<int>> dir{
		{-1,0}, // UP
		{0,1},  // RIGHT
		{1,0},  // DOWN
		{0,-1}  // LEFT
	};


bool canRoll(vector<vector<int>> &maze, int nrow, int ncolumn) {
	int m = maze.size();
	int n = maze[0].size();
	if(nrow < 0 || nrow >= m || ncolumn < 0 || ncolumn >= m) return false;

	if(maze[nrow][ncolumn]) return false;

	return true;
}

vector<int> roll(vector<vector<int>> &maze, vector<int> position, vector<int> direction) {
	int row = position[0];
	int column = position[1];
	while(canRoll(maze, row + direction[0], column + direction[1])) {
		row += direction[0];
		column += direction[1];
	}
	return {row, column};
}

bool checkEqual(vector<int> position, vector<int> destination) {
	
	if(position[0] == destination[0] && (position[1] == destination[1])) return true;

	return false;
}

bool traverse(vector<vector<int>> &maze, vector<int> position, vector<int> destination,vector<vector<bool>> seen) {
	if(seen[position[0]][position[1]]) return false;

	if(checkEqual(position, destination)) return true;

	seen[position[0]][position[1]] = true;

	for(int i=0; i<dir.size(); i++) {
		vector<int> newPosition = roll(maze, position, dir[i]);
		cout << dir[i][0] << dir[i][1] << " " << newPosition[0] << " " << newPosition[1] << endl;
		if(traverse(maze, newPosition, destination, seen)) return true;
	}
	return false;
}


bool hasPath(vector<vector<int>> &maze, vector<int> start, vector<int> destination) {
	int m = maze.size();
	int n = maze[0].size();

	vector<vector<bool>> seen(m, vector<bool> (n));

	return traverse(maze, start, destination, seen);
}


int main(int argc, char* argv[]) {
	abhisheknaiidu();

	vector<vector<int>> maze {
		{0,0,1,0,0},
        {0,0,0,0,0},
        {0,0,0,1,0},
        {1,1,0,1,1},
        {0,0,0,0,0}
	};

	vector<int> start{0,4};
	vector<int> destination{4,4};

	cout << hasPath(maze, start, destination) << endl;



   return 0;
}