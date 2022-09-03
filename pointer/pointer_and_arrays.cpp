#include<iostream>
using namespace std;
int main(){
int arr[10];
for(int i=0;i<10;i++){
    cin>>arr[i];
}
int *p;
for(p=arr;p<(arr+10);p++) cout<<*p<<endl;
return 0;
}
