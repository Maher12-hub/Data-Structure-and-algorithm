#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>input(){
int n;
cin>>n;
vector<int>data;
while(n--){
    int a;
    cin>>a;
    data.push_back(a);
}
return data;

}
/***
vector<int>revers(vector<int>data){
vector<int>rdata;
int ln=data.size();
for(int i=ln-1;i>=0;i--){
    rdata.push_back(data[i]);
}
return rdata;

}
**/
vector<int>revers(vector<int>data){
vector<int>rdata;
while(!data.empty()){
    int le=data.back();
    rdata.push_back(le);
    data.pop_back();
}
return rdata;

}
void output(vector<int>data){
for(int d:data){
    cout<<d<<" ";
}
cout<<endl;

}


int main(){
vector<int>data;
data=input();
data=revers(data);
output(data);
return 0;
}
