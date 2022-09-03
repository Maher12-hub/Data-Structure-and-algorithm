#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
queue<int>q;
for(int i=0;i<5;i++){
    int a;
    cin>>a;
    q.push(a);
}
while(!q.empty()){
    int b;
    b=q.front();
    cout<<b<<endl;
    q.pop();
}
return 0;

}
