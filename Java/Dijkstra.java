import sun.rmi.runtime.Log;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.Scanner;

public class Dijkstra
{
    private static long distance(ArrayList<Integer>[] adj, ArrayList<Long>[] cost, int s, int t)
    {
        long[] shortestPaths = dijkstra(adj, cost, s);
        if (shortestPaths[t] == 1000000000000l)
        {
            return -1;
        }
        else return shortestPaths[t];
    }
    private static long[] dijkstra(ArrayList<Integer>[] adj, ArrayList<Long>[] cost, int s) {
        long[] nodes = new long[adj.length];
        PriorityQueue<Node> myQueue = new PriorityQueue<>(new Comparator<Node>() {
            @Override
            public int compare(Node o1, Node o2) {
                return o1.nodeWeight.compareTo(o2.nodeWeight);
            }
        });
        for (int i = 0, n = adj.length; i < n; i++) {
            nodes[i] = 1000000000000l;
            myQueue.add(new Node(i, nodes[i]));
        }
        nodes[s] = 0;
        myQueue.add(new Node(s, nodes[s]));
        while (myQueue.size() > 0) {
            Node minNode = myQueue.poll();
            for (int i = 0, n = adj[minNode.nodeNumber].size(); i < n; i++)
            {
                if (checkRelaxation(nodes, cost[minNode.nodeNumber].get(i), adj[minNode.nodeNumber].get(i), minNode.nodeNumber))
                {
                    nodes[adj[minNode.nodeNumber].get(i)] = nodes[minNode.nodeNumber] + cost[minNode.nodeNumber].get(i);
                    myQueue.add(new Node(adj[minNode.nodeNumber].get(i), nodes[adj[minNode.nodeNumber].get(i)]));
                }
            }
        }
        return nodes;
    }
    private static boolean checkRelaxation(long[] nodes, long weightVU, int u, int v)
    {
        if (nodes[u] > nodes[v] + weightVU)
        {
            return true;
        }
        return false;
    }
    static class Node
    {
        Integer nodeNumber;
        Long nodeWeight;
        Node(int nodeNumber, Long nodeWeight)
        {
            this.nodeNumber = nodeNumber;
            this.nodeWeight = nodeWeight;
        }
    }

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        ArrayList<Integer>[] adj = (ArrayList<Integer>[])new ArrayList[n];
        ArrayList<Long>[] cost = (ArrayList<Long>[])new ArrayList[n];
        for (int i = 0; i < n; i++)
        {
            adj[i] = new ArrayList<Integer>();
            cost[i] = new ArrayList<Long>();
        }
        for (int i = 0; i < m; i++)
        {
            int x, y;
            long w;
            x = scanner.nextInt();
            y = scanner.nextInt();
            w = scanner.nextInt();
            adj[x - 1].add(y - 1);
            cost[x - 1].add(w);
        }
        int x = scanner.nextInt() - 1;
        int y = scanner.nextInt() - 1;
        System.out.println(distance(adj, cost, x, y));
    }
}


