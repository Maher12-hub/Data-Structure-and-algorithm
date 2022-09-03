#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void two_pointer(int arr[],int n,int ans){
int i=0,j=n-1;
while(true){
    if(arr[i]+arr[j]==ans){
        cout<<arr[i]<<" "<<arr[j]<<endl;
        break;
    }
    else if(arr[i]+arr[j]>ans) j--;
    else if(arr[i]+arr[j]<ans) i++;


}


}
int main(){
int arr[100];
for(int i=0;i<10;i++){
    cin>>arr[i];
}
sort(arr,arr+10);
two_pointer(arr,10,10);
return 0;
}
