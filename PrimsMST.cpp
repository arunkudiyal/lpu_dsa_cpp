#include<iostream>
using namespace std;

class MST {
    public:
        int V;
        int** graph;
        MST(int V) {
            this->V = V;
            graph = new int*[V];
            // for any non input graph
            for(int i=0; i < V; i++) {
                graph[i] = new int[V];
                for(int j=0; j < V; j++)
                    graph[i][j] = 0;
            }
        }

        void addEdge(int source, int dest, int cost) {
            graph[source][dest] = cost;
            graph[dest][source] = cost; 
        }

        void primsMST(int source) {
            // create a MST and displat it
            int cost[V]; bool visited[V];
            // when the graph is not explored
            for(int i=0; i < V; i++) {
                visited[i] = false;
                cost[i] = INT_MAX;
            }
            // you start the exploration from the source
            cost[source] = this->graph[source][source];
            // explore the neighbors
        }
};

int main() {
    MST mst(9);

    // mst.addEdge(0, 1, 4);
    // mst.addEdge(0, 7, 4);
    // mst.addEdge(1, 2, 4);
    // mst.addEdge(7, 6, 4);
    // mst.addEdge(7, 8, 4);
    // mst.addEdge(1, 7, 4);
    // mst.addEdge(2, 8, 4);
    // mst.addEdge(8, 6, 4);
    // mst.addEdge(2, 5, 4);
    // mst.addEdge(6, 5, 4);
    // mst.addEdge(2, 3, 4);
    // mst.addEdge(3, 5, 4);
    // mst.addEdge(3, 4, 4);
    // mst.addEdge(5, 4, 4);

    return 0;
}