#include <iostream>
#include <cstring>
#include <list>
// We can use either map or unordered_map => for hash-tables/ hash-maps;
// map uses BST to maintain the information and
// unordered_map uses separate chaining technique
#include <map>
using namespace std;

// template for Generic Graph!
// can store any kind of data - > int, bool, string etc!
template <typename T>

class Graph {
    
    map <T, list<T> > adjList;
    
    
public: 
    Graph() {
        
    }
    
    void addEdge( T u, T v, bool bidir=true) {
        adjList[u].push_back(v);
        if(bidir) {
            adjList[v].push_back(u);
        }
    }
    
    void printAdjList() {
        //Iterate over maps = use a for each loop
        //auto-> automatically determines the datatype of this!
        // Every row is a pair
        //here auto is -> pair <T, list<T> > 
        for(auto row: adjList) {
            T key = row.first;
            cout << key << "->";
            
            for( T city: row.second) {
                cout << city << ",";
            }
            cout << endl;
        }
    }
    
};



int main() {
	
	// string because its a templated graph
	Graph<string> g;
	g.addEdge("Amritsar", "Delhi");
	g.addEdge("Amritsar", "Jaipur");
	g.addEdge("Delhi", "Siachen");
	g.addEdge("Delhi", "Bangalore");
	g.addEdge("Delhi", "Agra");
	g.addEdge("Amritsar", "Siachen");

    // Since its a map, keys are sorted in a MAP!
 	g.printAdjList();
	
	return 0;
}
