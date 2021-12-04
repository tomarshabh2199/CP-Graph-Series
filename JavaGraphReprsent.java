import java.util.*;
import java.io.*;


class GFG{
    public static void main(String[] args) {
        int n=3, m=3;
        int adj[][]=new int[n+1][n+1];


        //edge 1--2
        adj[1][2]=1;
        adj[2][1]=1;

        //edge 2--3
        adj[2][3]=1;
        adj[3][2]=1;

        //edge 1--3
        adj[1][3]=1;
        adj[3][1]=1;

        //AdjanceyList
        ArrayList<ArrayList<Integer>> adjList=new ArrayList<ArrayList<Integer>>();
        for(int i=0; i<n; i++)
        adjList.add(new ArrayList<ArrayList<Integer>>());
    }
}
