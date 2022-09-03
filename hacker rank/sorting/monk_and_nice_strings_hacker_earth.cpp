#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string arr[1010];
arr[0]="A";
int n;
cin>>n;
for(int i=1;i<=n;i++){
    string str;
    cin>>str;
    int j=i-1;
    while(j>=0){
        if(arr[j]>=str){
            arr[j+1]=arr[j];
            j--;
        }
        else break;
    }
    cout<<j<<endl;
    arr[j+1]=str;
}
return 0;
}
