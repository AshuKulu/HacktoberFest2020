#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 100005;

int flag=0;

vector<int> graph[N];

void checkBipartite(int node,vector<int> &visited,int parent,int color){

    visited[node] = color;

    for(auto child:graph[node]){

        if(visited[child]==false){
            checkBipartite(child,visited,node,3-color);
        }
        else if(child!=parent && visited[child]==color)
            flag=1;
    }
}

int main() {

    int vertex,edges;
    cin>>vertex>>edges;

    for(int i=0;i<edges;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    vector<int> visited(N);
    // apply dfs on every node and check whether it is bipartite or not;
    for(int i=1;i<=vertex;i++){
        if(visited[i]==0)
            checkBipartite(i,visited,-1,1);
    }
    if(flag==0)
        cout<<"Bipartite Graph";
    else
        cout<<"Not a bipartite graph";
    return 0;
}
