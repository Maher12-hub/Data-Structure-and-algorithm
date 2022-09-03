#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void two_pointer(int arr[],int n,int ans){
int i=arr[0];
int j=arr[1];
while(true){
    if(arr[j]-arr[i]==ans){
        cout<<arr[i]<<" "<<arr[j]<<endl;
        break;
    }
    else if(arr[j]-arr[i]<ans) j++;
    else if(arr[j]-arr[i]>ans) i++;

}

}

int main(){
int arr[100];
int n,ans;
cin>>n>>ans;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
two_pointer(arr,n,ans);
return 0;
}
