#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter the elements of the array:";
cin>>n;
int arr[n];
cout<<endl;
for(i=0;i<n;i++) cin>>arr[i];
int *ptr;
ptr=&arr[0];
for(i=0;i<n;i++){
    cout<<*ptr<<endl;
    ptr++;
}


}
