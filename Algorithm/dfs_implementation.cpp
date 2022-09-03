#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool vis[100]={false};
void dfs(int n,vector<int>adj[100]){
vis[n]=true;
cout<<n<<" ";
for(int i=0;i<adj[n].size();i++){
    if(!vis[adj[n][i]]) dfs(adj[n][i],adj);
}

}

int main(){
vector<int>adj;
int a,b;
int n;
cin>>n;
int x,y;
for(int i=0;i<n;i++){
cin>>y;
adj.push_back(y);
}
dfs(0,adj);
return 0;

}
