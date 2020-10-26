'''
Prims algorithm: find the minimum spanning graph by starting from vertex's lowest weighted edge and then build the MST
by adding edges one after the other that has the next smallest weight and links to a new vertex until all the vertices
are in the graph.
'''

graph = {'a':{'b':5,'c':8,'g':7},
         'b':{'a':5,'c':3},
         'c':{'a':8,'b':3,'d':8,'f':3,'e':6},
         'd':{'c':8,'e':5},
         'e':{'c':6,'d':5},
         'f':{'c':3,'g':4},
         'g':{'a':7,'f':4}}

def prims(g, start):
    cost = 0
    mst = []
    vertices = len(graph.keys())
    mst.append(start)
    # iterate to get all vertices
    for _ in range(vertices - 1):
        smallest = 999
        vertex = ''
        # find the smallest edge
        for v in mst:
            for (key, value) in graph[v].items():
                if value < smallest and key not in mst:
                    smallest = value
                    vertex = key
        # add vertex to mst
        cost += smallest
        mst.append(vertex)
    print('Minimum cost: '+ str(cost))
    return mst

print(prims(graph,'a'))
