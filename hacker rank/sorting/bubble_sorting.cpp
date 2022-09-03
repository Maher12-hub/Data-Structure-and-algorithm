#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[1000];
long long int coun=0;
void bubble_sort(int arr[],int n){
for(long long int i=0;i<n;i++){
    for(long long int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            coun=coun+1;
            long long int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
}
int main(){
int n;
cin>>n;
for(long long int i=0;i<n;i++) cin>>arr[i];
bubble_sort(arr,n);
cout<<"Array is sorted in "<<coun<<" swaps."<<endl;
cout<<"First Element: "<<arr[0]<<endl;
cout<<"Last Element: "<<arr[n-1]<<endl;
return 0;
}
