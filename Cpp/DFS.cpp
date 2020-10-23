#include<iostream>
#include<list>
using namespace std;
class Graph{
	int n;
	list<int> *adj;
	public: Graph(int n);
	void dfsUtil(int v,bool visited[]);
	void add_edge(int v,int num);
	void dfs(int v);
};
Graph::Graph(int n){
	this->n=n;
	adj=new list<int>[n];
}
void Graph::add_edge(int v,int num){
	adj[v].push_back(num);
}
void Graph::dfsUtil(int v,bool visited[]){
	visited[v]=true;
	cout<<v<<" ";
	list<int>::iterator it;
	for(it=adj[v].begin();it!=adj[v].end();it++)
		if(!visited[*it])
			dfsUtil(*it,visited);
}
void Graph::dfs(int v){
	bool *visited=new bool[n];
	for(int i=0;i<n;i++)
        visited[i]=false;
	dfsUtil(v,visited);
}
 
int main(){
	Graph g(4);
	g.add_edge(0, 1);
g.add_edge(0, 2);
  	g.add_edge(1, 2);
g.add_edge(2, 0);
 	g.add_edge(2, 3);
   	g.add_edge(3, 3);
   	g.dfs(2);
}