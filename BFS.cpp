#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Graph
{
    private: 
        int v;
        vector <int> *adj;
    public: 
        Graph(int vetices)
        {
            this->v = vetices;
            this->adj = new vector<int>[this->v];
        }
        void addEdge(int U, int V)
        {
            this->adj[U].push_back(V);
            this->adj[V].push_back(U);
        }
        void printGraph()
        {
            for(int i = 0; i < this->v; i++)
            {
                cout << i << "->";
                for(int v : this->adj[i])
                {
                    cout << v << " ";
                }
                cout << endl;
            }
        }
        void BFS(int s)
        {
            bool visited[this->v + 1];
            for(int i = 0; i< this->v; i++)
            {
                visited[i] = false;
            }
            queue <int> q;
            visited[s] = true;
            q.push(s);
            cout << "source " << s << " :";
            while(q.empty() == false)
            {
                int u = q.front();
                q.pop();
                cout << u << " ";
                for(int v: this->adj[u])
                {
                    if(visited[v] == false)
                    {
                        visited[v] = true;
                        q.push(v);
                    }
                }
            }
            cout << endl;
        } 
};

int main(int argc, char *argv[])
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(0, 2);
    g.addEdge(3, 4);
    g.addEdge(2, 4);
    g.printGraph();
    g.BFS(0);
    g.BFS(3);
    g.BFS(4);
    return 0;
}