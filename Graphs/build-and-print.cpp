#include <iostream>
#include <list>
using namespace std;

//Ajd list implemenattion for integer nodes.
class Graph {
    int V;
    // Storing dyanamic Array =? Array of ll of size V, V LL's are there
    // we cannot initialiaze here, we need to construct constructor here!
    // <list> <int> *a = new list <int> [V];
    
    list <int> *adjList;

public:
    Graph(int v) {
        V = v;
        adjList = new list<int> [V];
    }
    
    void addEdge(int u, int v, bool bidir = true) {
        adjList[v].push_back(u);
        if (bidir) {
            adjList[u].push_back(v);
            
        }
    }
    
    void printAdjList() {
        for(int i=0; i<V ;i++) {
        cout << i << " => ";
        // for each, only works in c++14
            for( int node : adjList[i]) {
                cout << node << ",";
            }
            cout<< endl;
        }
    }
};


int main() {
    
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,3);
    g.addEdge(2,3);
    
    g.printAdjList();
    
    return 0;
}
