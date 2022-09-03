#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int comparison(string x,string y){
        int a=stoi(x);
        int b=stoi(y);
        if(a>b) return 1;

}
int main(){
int n;
cin>>n;
vector<string>vec;
for(int i=0;i<n;i++){
    string a;
    cin>>a;
    vec.push_back(a);
}
for(int i=0;i<n-1;i++){
     int  index_min=i;
    for(int j=i+1;j<n;j++){
        string c=vec[index_min];
        string d=vec[j];
        int e=comparison(c,d);
        if(e==1) index_min=j;
    }
    if(index_min!=i){
        string temp=vec[i];
        vec[i]=vec[index_min];
        vec[index_min]=temp;
    }
}
for(int i=0;i<n;i++){
    cout<<vec[i]<<endl;
}
return 0;
}
