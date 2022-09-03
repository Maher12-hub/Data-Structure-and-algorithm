#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int arr[100005];
long long int coun=0;
void bubblegraph(long long int arr[],long long int n){
for(long long int i=0;i<n;i++){
    for(long long int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            coun++;
            long long int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}
int main(){
long long int n;
cin>>n;
for(long long int i=0;i<n;i++) cin>>arr[i];
bubblegraph(arr,n);
cout<<coun<<endl;
return 0;
}
