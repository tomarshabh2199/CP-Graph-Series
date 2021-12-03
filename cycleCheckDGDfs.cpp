#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
           bool checkCycle(int node, vector<int>adj[], int vis[], int dfsvis[]){ 
               vis[node]=1;
               dfsvis[node]=1;
               for(auto it: adj[node]){
                   if(!vis[it]){
                       if(checkCycle(it, vis, dfsvis))
                          return true;
                   }
                   else if(dfsvis[it]){
                       return true;
                   }
               }
               dfsvis[node]=0;
               return false;
           }
    
    public:
         bool isCyclic(int N, vector<int>adj[]){
             int vis[N], dfsvis[N];
             memset(vis,0,sizeof(vis));
             memset(dfsvis,0,sizeof(dfsvis));

             for(int i=0;i<N;i++){
                 if(!vis[i]){
                     if(checkCycle(i,adj,vis,dfsvis)){
                         return true;
                     }
                 }
             }
             return false;
         }
};

int Main(){
    int t;
    cin>>t;
    while(t--){
        int V,E;
        cin>>V>>E;

        vector<int> adj[V];

        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout<<obj.isCyclic(V, adj)<<"\n";
    }
    return 0;
}