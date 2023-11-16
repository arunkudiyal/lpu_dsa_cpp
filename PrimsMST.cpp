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

        int minVertex(bool visited[], int cost[]) {
            int minCost = INT_MAX; int minVertex = -1;
            for(int u=0; u < V; u++) {
                if(cost[u] < minCost && !visited[u]) {
                    minCost = cost[u]; 
                    minVertex = u;
                }
            }
            return minVertex;
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
            // explore the neighbors for V-1 edges
            for(int i=0; i < V-1; i++) {
                // u -> The min-cost bvertex which is not visited
                int u = minVertex(visited, cost);
                visited[u] = true;
                // explore the neighbors of u & update the better cost
                for(int v=0; v < V; v++) {
                    if(graph[u][v] != 0 && !visited[v] && graph[u][v] < cost[v]) {
                        cost[v] = graph[u][v];
                    }
                }
            }

            // all the costs for all the vertices is found, ill print
            for(int i=0; i < V; i++)
                cout << cost[i] << " ";
            cout << endl;
        }
};

int main() {
    MST mst(9);

    mst.addEdge(0, 1, 4);
    mst.addEdge(0, 7, 8);
    mst.addEdge(1, 2, 8);
    mst.addEdge(7, 6, 1);
    mst.addEdge(7, 8, 7);
    mst.addEdge(1, 7, 11);
    mst.addEdge(2, 8, 2);
    mst.addEdge(8, 6, 6);
    mst.addEdge(2, 5, 4);
    mst.addEdge(6, 5, 2);
    mst.addEdge(2, 3, 7);
    mst.addEdge(3, 5, 14);
    mst.addEdge(3, 4, 9);
    mst.addEdge(5, 4, 10);

    mst.primsMST(0);

    return 0;
}