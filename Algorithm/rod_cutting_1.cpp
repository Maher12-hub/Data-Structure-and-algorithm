#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>prices;
int rod_cut(int n){
if(n<=1) return prices[1];
int result=0,num=0;
int j;
for(j=1;j<n;j++){
    num=rod_cut(n-j)+prices[j];
    result=max(result,num);
}
return result;
}
int main(){
int n,i;
cin>>n;
int m,x;
cin>>m;
prices.push_back(0);
for(i=1;i<=m;i++){
    cin>>x;
    prices.push_back(x);
}
cout<<rod_cut(n)<<endl;
return 0;
}
