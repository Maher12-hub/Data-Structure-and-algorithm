#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int arr[1000];
long long int coun=0;
void bubble_sort(long long int arr[],long long int n){
bool swapped=true;
while(swapped!=false){
    swapped=false;
    for(long long int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swapped=true;
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

}
int main(){
long long int n;
cin>>n;
for(long long int i=0;i<n;i++) cin>>arr[i];
bubble_sort(arr,n);
for(long long int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1]){
        coun++;
        i++;
    }
}
cout<<coun<<endl;
return 0;
}
