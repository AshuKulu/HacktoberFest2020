#include<iostream>
#include<list>
using namespace std;
class Graph{
	int v;
	list<int> *adj;
	public: Graph(int v);
	void add_edge(int v,int num);
	void bfs(int source);
};
Graph::Graph(int v){
	this->v=v;
	adj=new list<int>[v];
}
void Graph::add_edge(int v,int num){
	adj[v].push_back(num);
}
void Graph::bfs(int source){
    bool *visited=new bool[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	list<int> queue;
	visited[source]=true;
	queue.push_back(source);
	list<int>::iterator it;
	while(!queue.empty()){
		source=queue.front();
cout<<source<<" ";
queue.pop_front();
for(it=adj[source].begin();it!=adj[source].end();++it){
	if(!visited[*it]){
		visited[*it]=true;
		queue.push_back(*it);
	}
}
}
}
int main(){
	Graph g(4);
	g.add_edge(0, 1);
	g.add_edge(0, 2);
  	g.add_edge(1, 2);
	g.add_edge(2, 0);
 	g.add_edge(2, 3);
   	g.add_edge(3, 3);
   	g.bfs(2);
}