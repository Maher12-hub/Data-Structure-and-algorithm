#include<iostream>
using namespace std;
int main(){
int nodes,edges;
cin>>nodes>>edges;
int adj[100][100];
int n1,n2;
for(int i=0;i<edges;i++){
    cin>>n1>>n2;
    adj[n1][n2]=1;
    adj[n2][n1]=1;
}
for(int i=0;i<nodes;i++){
    for(int j=0;j<nodes;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}
return 0;

}
