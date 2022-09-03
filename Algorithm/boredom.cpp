#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,x;
cin>>n;
int arr[n];
memset(arr,0,sizeof(arr));
for(i=0;i<n;i++){
    cin>>x;
    arr[x]++;
}
for(i=0;i<5;i++){
    cout<<arr[i]<<endl;
}
return 0;

}
