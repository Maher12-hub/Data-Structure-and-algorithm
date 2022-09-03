#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>data){
cout<<"total row="<<data.size()<<endl;
for(vector<int>row:data){
    cout<<"["<<row.size()<<"]=";
    for(int column:row) cout<<column<<" ";
    cout<<endl;
}
cout<<endl;

}
int main(){
vector<vector<int>>data;
for(int i=1;i<=4;i++){
    vector<int>row;
    int d=i;
    while(d!=1){
        row.push_back(d);
        if(d%2==0) d=d/2;
        else d=d*3+1;
    }
    data.push_back(row);
}

print(data);
}
