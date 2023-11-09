#include<iostream>
using namespace std;

class Graph {
    public:
        int numVertices;
        // adjacency matrix
        int** adjMatrix;
        Graph(int numVertices) {
            this->numVertices = numVertices;
            adjMatrix = new int*[numVertices];
            // for any non input graph
            for(int i=0; i < numVertices; i++) {
                adjMatrix[i] = new int[numVertices];
                for(int j=0; j < numVertices; j++)
                    adjMatrix[i][j] = 0;
            }
        }

        void display() {
            for(int i=0; i < numVertices; i++) {
                for(int j=0; j < numVertices; j++)
                    cout << adjMatrix[i][j] << " ";
                cout << endl;
            }
        }

        // Non-Directed Graph add edges - if there exists a path b/w s to d; then theres a path from d to s
        void addEdge(int source, int dest) {
            adjMatrix[source][dest] = 1;
            adjMatrix[dest][source] = 1; 
        }

        // a utility function to remove a edge in a non-directed graph -
        void removeEdge(int source, int dest) {
            adjMatrix[source][dest] = 0;
            adjMatrix[dest][source] = 0; 
        }

        // a utility function which checks if any node in the graph contains self loop
        bool containsSelfLoop() {
            for(int i=0; i < numVertices; i++)
                if(adjMatrix[i][i] != 0) return true;
            return false;
        }
};

int main() {
    Graph graph(4);
    graph.addEdge(3, 0);
    graph.addEdge(3, 3);
    graph.addEdge(3, 1);
    graph.addEdge(3, 2);
    graph.display();

    cout << endl;
    cout << "Does graph contains a self loop - " << graph.containsSelfLoop()  << endl;        // false
}