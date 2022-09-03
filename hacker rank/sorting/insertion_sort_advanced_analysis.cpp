#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int arr[100006];
long long int sum=0;
void insertion_sort(long long int arr[], long long int n){
for(long long int i=1;i<n;i++){
    long long int item=arr[i];
     long long int j=i-1;
    long long int shift=0;
    while(j>=0 && arr[j]>item){
        arr[j+1]=arr[j];
        shift++;
        j--;
    }
    arr[j+1]=item;
    sum+=shift;
}
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
long long int n;
cin>>n;
for(long long int i=0;i<n;i++) cin>>arr[i];
insertion_sort(arr,n);
cout<<sum<<endl;
sum=0;
}
return 0;
}
