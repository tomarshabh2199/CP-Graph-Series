#include<stdc++.h>
#include<iostream>
#include<string>    
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    //declare the adjacent matrix
  // int adj[n+1][n+1];

  //declare adjacency list
  vector<int> adj[n+1];

   //take edges as input
   for (int i=0; i<m; i++){
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   //    adj[u][v]=1;
   //    adj[v][u]=1;
   }
   return 0;

}
