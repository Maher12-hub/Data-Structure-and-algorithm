#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int a[100];
for(int i=0;i<5;i++){
    cin>>a[i];
}
sort(a,a+5);
for(int i=0;i<5;i++) cout<<a[i]<<" ";
cout<<endl;
return 0;
}

