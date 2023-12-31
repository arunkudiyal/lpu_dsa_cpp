#include<iostream>
#include<queue>
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

        // Traversal in Graph - BFS & DFS -
        void BFS(int start) {
            int V = this->numVertices;
            bool visited[V];
            // initially when there is no exploration
            for(int i=0; i < V; i++) visited[i] = false;
            // ArrayList to maintain the check
            queue<int> q;
            q.push(start);
            visited[start] = true;
            int current;
            while(!q.empty()) {
                current = q.front();
                cout << current << " ";
                q.pop();
                for(int i=0; i < V; i++) {                              // 0, 1, 2, 3, 4, 5
                    if(adjMatrix[current][i] != 0 && (!visited[i])) {
                        q.push(i);
                        visited[i] = true;
                    }
                }
            }
            cout << endl;
        }
        // DFSUtil(0, {F, F, F, F, ... , F})
        void DFSUtil(int start, bool visited[]) {
            int V = this->numVertices;
            visited[start] = true;
            cout << start << " ";
            for(int i=0; i < V; i++)
                if(adjMatrix[start][i] != 0 && (!visited[i])) DFSUtil(i, visited);
        }

        void DFS(int start) {
            int V = this->numVertices;
            bool visited[V];
            for(int i=0; i < V; i++) visited[i] = false;
            DFSUtil(start, visited);
            cout << endl;
        }

        void display() {
            for(int i=0; i < numVertices; i++) {
                for(int j=0; j < numVertices; j++)
                    cout << adjMatrix[i][j] << " ";
                cout << endl;
            }
        }
};

int main() {
    Graph graph(9);
    graph.addEdge(0, 1);
    graph.addEdge(0, 7);
    graph.addEdge(1, 2);
    graph.addEdge(7, 6);
    graph.addEdge(7, 8);
    graph.addEdge(1, 7);
    graph.addEdge(2, 8);
    graph.addEdge(8, 6);
    graph.addEdge(2, 5);
    graph.addEdge(6, 5);
    graph.addEdge(2, 3);
    graph.addEdge(3, 5);
    graph.addEdge(3, 4);
    graph.addEdge(5, 4);
    graph.display();

    cout << endl;
    cout << "Does graph contains a self loop - " << graph.containsSelfLoop()  << endl;        // false

    graph.BFS(0);
    graph.DFS(0);
}