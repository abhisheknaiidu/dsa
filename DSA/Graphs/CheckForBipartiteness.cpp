class Solution {
public:
	// vector<int> getIntialColoring(vector<vector<int>>& graph) {
	// 	int n = graph.length()
	// 	vector<int> coloring(n);
	// 	for(int i=0; i<n; i++) {
	// 		coloring[i] = 0;
	// 	}
	// }
	int oppositeColor(int Prevnode, vector<int> coloring) {
		return coloring[Prevnode] == 1 ? 2 : 1;
	}

    bool isBipartite(vector<vector<int>>& graph) {
    	int n = graph.size();
        vector<int> coloring(n);
        queue<int> q;
        unordered_set<int> seen;
 /*
      Graph may not be connected, we will start a BFS from each vertex,
      but once a vertex is visited it can't be processed again so this
      still stays to O(|V|+|E|)
*/
        for(int i=0; i<n; i++) {
        	if(seen.find(i) == seen.end()) {
        	int start = i;
        	// 1 => Black && 2 ==> white;
        	coloring[start] = 1; 
        	q.push(start);
        	seen.insert(start);

        	while(!q.empty()) {
        		int node = q.front();
        		q.pop();
        		for(auto x: graph[node]) {
        			if(coloring[x] == 0) {
        				coloring[x] = oppositeColor(node, coloring);
        			} else if(coloring[x] == coloring[node]) return false;
        			if(seen.find(x) == seen.end()) {
        				q.push(x);
        				seen.insert(x);
        			}
        		}
        	 }
          }
       }
       return true;
    }
};