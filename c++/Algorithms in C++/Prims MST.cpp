#include<bits/stdc++.h>
using namespace std;

vector<int> taken;
vector<vector<pair<int,int> > > AdjList;
priority_queue<pair<int,int> > pq;    //Max-Heap in C++ STL

void process(int vtx)
{
    taken[vtx]=1;
    for(int j=1; j<(int)AdjList[vtx].size(); j++)
    {
        pair<int,int> v=AdjList[vtx][j];
        if(!taken[v.first]) pq.push(make_pair(-v.second,-v.first));
    }
}

int main()
{
    cout<<"Enter the number of vertices: ";
    int V;
    cin>>V;
    vector<pair<int,int> > temp(1,make_pair(-1,-1));
    for(int i=0;i<V;i++)    AdjList.push_back(temp);
    cout<<"Enter the number of Edges: ";
    int E;
    cin>>E;
    cout<<"Enter the edges with their weights: ";
    for(int i=0; i<E; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        AdjList[u].push_back(make_pair(v,w));
        AdjList[v].push_back(make_pair(u,w));
    }
    taken.assign(V,0);
    int weight=0;

    process(0);
    while(!pq.empty())
    {
        pair<int,int> p=pq.top();
        pq.pop();
        int u=-p.second;
        int w=-p.first;

        if(!taken[u])
            weight+=w, process(u);
    }
    
    cout<<"The weight of the MST is: "<<weight;

    return 0;
}