#include<iostream>
using namespace std;
void double_arr(int *a,int size){
int *p;
for(p=a;p<a+size;p++){
        *p=*p*2;
}
}
int main(){
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(int);
double_arr(&arr[0],size);
for(int i=0;i<size;i++) cout<<arr[i]<<endl;
}
