#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>vec;
int n;
cin>>n;
for(long int i=0;i<n;i++){
    long int a;
    cin>>a;
    vec.push_back(a);
}
for(long int i=0;i<n-1;i++){
    long int index_min=i;
    for(long int j=i+1;j<n;j++){
        if(vec[j]<vec[index_min]) index_min=j;
    }
    if(index_min!=i){
        long int temp=vec[i];
        vec[i]=vec[index_min];
        vec[index_min]=temp;
    }
}
for(long int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
}
cout<<endl;
}
