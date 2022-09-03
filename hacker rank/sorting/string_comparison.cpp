#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string arr[1005];
void insertion_sort(string arr[],int n){
for(int i=1;i<=n;i++){
    string str="";
    cin>>str;
    int j=i-1;
    while(j>=0){
        if(arr[j]>str){
         arr[j+1]=arr[j];
         j--;
        }
        else break;
    }
    cout<<j<<endl;
    arr[j+1]=str;

}
}
int main(){
int n;
cin>>n;
arr[0]="A";
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
insertion_sort(arr,n);
return 0;
}
