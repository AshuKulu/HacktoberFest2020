#include<bits/stdc++.h>
using namespace std;

class UnionFind             //To check for a cycle in the graph.
{
    private: vector<int> p,rank;
    public:
    UnionFind(int N)
    {
        rank.assign(N,0);
        p.assign(N,0);
        
        for(int i=0;i<N;i++)
            p[i]=i;
    }
    
    int findSet(int i)  {return (p[i]==i) ? i : (p[i]=findSet(p[i]));}
    
    bool isSameSet(int a, int b)    {return findSet(a)==findSet(b);}
    
    void unionSet(int a,int b)
    {
        if(!isSameSet(a,b))
        {
            int x=findSet(a);
            int y=findSet(b);

            if(rank[x]>rank[y]) {p[y]=x; rank[x]++;}
            else
            {
                p[x]=y;
                if(rank[x]==rank[y])    rank[y]++;
            }          
        }
    }
};

int main()
{
    vector<pair< int, pair<int,int> > > EdgeList;
    cout<<"Enter the number of vertices: \n";
    int V;
    cin>>V;
    cout<<"Enter the number of edges: \n";
    int E;
    cin>>E;
    cout<<"Enter the edges with their weights: (Vertex 1 Vertex 2 Weight)\n";
    for(int i=0;i<E;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        EdgeList.push_back(make_pair(w,make_pair(u,v)));
    }
    
    sort(EdgeList.begin(),EdgeList.end());

    int weight=0;

    UnionFind UF(V);

    for(int i=0;i<E;i++)
    {
        pair< int, pair<int,int> > front=EdgeList[i];
        if(!UF.isSameSet(front.second.first, front.second.second))
        {
            weight+=front.first;
            UF.unionSet(front.second.first, front.second.second);
        }
    }
    cout<<"Final Weight of the MST is: "<<weight;
    return 0;
}