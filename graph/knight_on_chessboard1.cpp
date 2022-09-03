#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
const int num=2e9;
int d[50][50];

void push_func(queue<pair<int,int>>&q,int i,int j,int dist){
     if(i>=0 && i<n && j>=0 && j<n && d[i][j]>dist){
        d[i][j]=dist;
        q.push({i,j});
     }

}

int bfs(int n,int a,int b){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        d[i][j]=num;
    }
}
d[0][0]=0;
queue<pair<int,int>>q;
q.push({0,0});
while(!q.empty()){
    pair<int,int>v=q.front();
    q.pop();
    int x=v.first;
    int y=v.second;
    int dist=d[x][y]+1;
    push_func(q,x+a,y+b,dist);
    push_func(q,x+a,y-b,dist);
    push_func(q,x-a,y+b,dist);
    push_func(q,x-a,y-b,dist);
    push_func(q,x+b,y+a,dist);
    push_func(q,x+b,y-a,dist);
    push_func(q,x-b,y+a,dist);
    push_func(q,x-b,y-a,dist);
}
int ans=d[n-1][n-1];
if(ans==num) return -1;
else return ans;
}

int main(){
cin>>n;
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        cout<<bfs(n,i,j)<<" ";
    }
    cout<<endl;
}
return 0;

}
