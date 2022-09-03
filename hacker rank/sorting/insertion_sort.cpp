#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100];
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=0;j--){
            if(arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }

}
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++) cin>>arr[i];
insertion_sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
