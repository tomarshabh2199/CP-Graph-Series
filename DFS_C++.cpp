#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution{
    void dfs(int node, vector<int>&vis, vector<int> adj[], vector<int> &storeDfs){
        storeDfs.push(node);
        vis[node]=1;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,storeDfs);
            }
        }
    }
    public:
          vector<int>dfsOfGraph(int v, vector<int> adj[]){ 
              vector<int>storeDfs;
              vector<int>vis(v+1,0);
              for(int i = 1; i <=v; i++){
                  if(!vis[i]){
                      dfs(i,vis, adj, storeDfs);
                  }
              }
              return storeDfs;
          }
};
