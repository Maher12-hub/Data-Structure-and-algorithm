#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long  int n;
cin>>n;
long int arr[n];
long int sum=0,k=0;
for(long int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
for(long int i=0;i<n-1;i++){
    k=1;
    while(arr[i]==arr[i+1] && i<n-1){
        k++;
        i++;
    }
    sum+=(((k)*(k-1))/2);
    cout<<sum<<endl;
}
//cout<<sum<<endl;
return 0;
}
