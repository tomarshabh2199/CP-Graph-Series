import java.util.*;
import java.io.*;

class Solution
{
    static boolean checkForCycle(int node, int parent, boolean vis[], ArrayList<ArrayList<Integer>> adj)
    {
        vis[node] = true;
        for(Integer it: adj.get(node)){
             if(vis[it]==false){
                 if(checkForCycle(it, node, adj)==true) return true;
             }
             else if(it!=parent){ 
                 return true;
             }
        }
        return false;
    }
    public boolean isCycle(int V, ArrayList<ArrayList<Integer>> adj)
    {
        boolean vis[] = new boolean[V+1];
        Arrays.fill(vis, false);

        for(int i=1; i<=V; i++)
           if(vis[i] == false)
              if(checkForCycle(i,-1,vis,adj))
                  return true;

        return false;
    }
}
