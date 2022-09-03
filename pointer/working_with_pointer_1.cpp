#include<iostream>
using namespace std;
int main(){
int a=20;
int *p=&a;
cout<<"Address of p is= "<<p<<" value of p is ="<<*p<<endl;
int b=30;
*p=b;
cout<<"Address of p is= "<<p<<" value of p is ="<<*p<<endl;
return 0;
}
