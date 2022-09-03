#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long  n;
cin>>n;
int arr[100005],arr1[100005];
memset(arr,0,sizeof(arr));
memset(arr1,0,sizeof(arr1));
for(long long i=0;i<n;i++){
    cin>>arr[i];

}
sort(arr,arr+n);
for(long long i=0;i<n;i++){
    arr1[arr[i]]++;
}
long long  m;
cin>>m;
int brr[100005];
int brr1[100005];
memset(brr,0,sizeof(brr));
memset(brr1,0,sizeof(brr1));
for(long long  j=0;j<m;j++){
    cin>>brr[j];

}
sort(brr,brr+m);
for(long long  j=0;j<m;j++){
    brr1[brr[j]]++;
}
for(long long k=0;k<100005;k++){
    if(brr1[k]-arr1[k]>0) cout<<k<<" ";
}
cout<<endl;

return 0;
}
