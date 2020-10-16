
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,E;
        cin>>N>>E;

        vector<int> adj[N];

        for(int i=0;i<E;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }

        vector<int> res=bfs(adj,N);
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;

    }
}

vector <int> bfs(vector<int> g[], int N) {
    vector<int> res;
    queue<int> q;
    vector<int> visited(N,0);
    q.push(0);
    visited[0]=1;
    while(!q.empty()){
        int t=q.front();
        res.push_back(t);
        q.pop();
        for(int i:g[t]){
            if(visited[i]==0){
                q.push(i);
                visited[i]=1;
            }
        }
    }
    return res;
}
