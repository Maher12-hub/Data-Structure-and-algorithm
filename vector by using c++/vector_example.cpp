#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>data;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    data.push_back(a);
}
int ln=data.size();
for(int i=ln-1;i>=0;i--){
    cout<<data[i]<<" ";
}
cout<<endl;
return 0;



}
