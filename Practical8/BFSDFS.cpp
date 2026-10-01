#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
    int V;                    
    vector<vector<int>> adj;  

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

   
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

   
    void DFSUtil(int vertex, vector<bool>& visited) {
        visited[vertex] = true;
        cout << vertex << " ";

        for (int neighbour : adj[vertex]) {
            if (!visited[neighbour]) {
                DFSUtil(neighbour, visited);
            }
        }
    }

  
    void DFS(int start) {
        vector<bool> visited(V, false);

        cout << "DFS Traversal: ";
        DFSUtil(start, visited);
        cout << endl;
    }

  
    void BFS(int start) {
        vector<bool> visited(V, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal: ";

        while (!q.empty()) {
            int vertex = q.front();
            q.pop();

            cout << vertex << " ";

            for (int neighbour : adj[vertex]) {
                if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }

        cout << endl;
    }
};

int main() {
    
    Graph g(6);

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    
    g.DFS(0);
    g.BFS(0);

    return 0;
}
