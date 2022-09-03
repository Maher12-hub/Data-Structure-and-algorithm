#include<iostream>
using namespace std;
int main(){
/**
int x=10,y=20;
int *a;
int *b;
int *c;
a=&x;
b=&y;
cout<<"a= "<<*a<<endl;
cout<<"b= "<<*b<<endl;
a=&y;
b=&x;
cout<<"a= "<<*a<<endl;
cout<<"b= "<<*b<<endl;
**/
int x=10,y=20,temp;
int *a,*b;
a=&x;
b=&y;
temp=*a;
*a=*b;
*b=temp;
cout<<"x= "<<x<<endl;
cout<<"Y= "<<y<<endl;
return 0;
}
