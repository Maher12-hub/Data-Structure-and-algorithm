#include<iostream>
using namespace std;
int main(){
/**
int a[5]={10,11,12,13,14};
int *b;
b=&a[3];
cout<<"3rd element of the array is= "<<*b<<endl;
**/
int a[5]={10,11,12,13,14};
int i;
int *ptr;
ptr=&a[0];
for(i=0;i<5;i++){
    cout<<*ptr<<endl;
    ptr++;
}

return 0;
}
