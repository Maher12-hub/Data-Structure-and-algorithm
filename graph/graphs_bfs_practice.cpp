#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define mx 150
vector<int>graph[mx];
bool vis[mx];
int dist[mx];
void bfs(int source){
    queue<int>Q;
    vis[source]=1;
    dist[source]=0;
    Q.push(source);
    cout<<source<<" ";
    while(!Q.empty()){
        int node=Q.front();
        Q.pop();
        for(int i=0;i<graph[node].size();i++){
            int next=graph[node][i];

            if(vis[next]==0){
                cout<<next<<" ";
                vis[next]=1;
                dist[next]=dist[node]+1;
                Q.push(next);

            }
        }
    }
}

int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
int source;
cin>>source;
bfs(source);
return 0;
}
