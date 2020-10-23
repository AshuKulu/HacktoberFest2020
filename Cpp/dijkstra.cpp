#define v 9
void min_distance(int dist[v],bool trset[v]){
	int min_dis=INT_MAX, min_index;
	for(int i=0;i<v;i++){
		if(dist[i]<=min && sprset[i]==false){
			min_dis=dist[i];
			min_index=i;
		}
	}
	return min_index;
}
void print_sol(int dis[v]){
	cout<<”Vertex”<<”\t\tDistance from source”;
	for(int i=0;i<v;i++)
		cout<<i<<” “<<dist[i]<<endl;
}
void dijkstra(int graph[v][v],int src){
	int dist[v];
	bool trset[v];
	for(int i=0;i<v;i++){
		dist[v]=INT_MAX;
		trset[i]=false;
	}
	dist[src]=0;
	for(int i=0;i<v-1;i++){
		int u=min_distance(dist,trset);
		trset[u]=true;
		for(int j=0;j<v;j++){
			if(!trset[j] && graph[u][j] && dist[u]!=INT_MAX&& dist[u]+graph[u][j]<dist[j])
				dist[j] = dist[u]+graph[u][j];
	}
	print_sol(dist);
}
int main(){
int graph[v][v]={ { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
    dijkstra(graph, 0);
}