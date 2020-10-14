#include<iostream>
#include<vector>
using namespace std;

class Graph
{
    private: 
        int v;
        vector<int> *adj;
        void DFSRec(int s, bool visited[])
        {
            visited[s] = true;
            cout << s << " ";
            for(int u: this->adj[s])
            {
                if(visited[u] == false)
                {
                    DFSRec(u, visited);
                }
            }
        }
    public:
        Graph(int vertices)
        {
            this->v = vertices;
            this->adj = new vector<int>[this->v];
        }
        void addEdge(int x, int y)
        {   
            this->adj[x].push_back(y);
            this->adj[y].push_back(x);
        }

        void printGraph()
        {
            for(int i = 0; i < this->v; i++)
            {
                cout << i << "->" ;
                for(int u : this->adj[i])
                {
                    cout << u << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        
        void DFS(int s)
        {
            bool visited[this->v];
            for(int i = 0; i < this->v; i++)
            {
                visited[i] = false;
            }
            // aditional check for disconneted graphs
            for(int i = 0; i < this->v; i++)
            {
                if(visited[i] == false)
                {
                    DFSRec(i, visited);
                }
            }
        }

};

int main(int argc, char *argv[])
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(1, 4);
    g.addEdge(4, 6);
    g.printGraph();
    g.DFS(0);
    return 0;
}