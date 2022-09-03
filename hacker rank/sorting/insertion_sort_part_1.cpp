#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[4000];
void insertion_sort(int arr[],int n){
   for(int i=1;i<n;i++){
    int item=arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>item){
        arr[j+1]=arr[j];
        j--;
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    arr[j+1]=item;
   }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    insertion_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;

return 0;
}
