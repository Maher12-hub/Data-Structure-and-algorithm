#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[6000];
int coun=0;
void bubble_sort(int arr[],int n){
bool swapped=true;
    while(swapped!=false){
        swapped=false;
        coun++;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swapped=true;
            }
        }
    }
}
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++) cin>>arr[i];
bubble_sort(arr,n);
cout<<coun<<endl;
return 0;
}
