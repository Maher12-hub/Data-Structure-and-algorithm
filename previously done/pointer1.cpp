#include<iostream>
using namespace std;
int main(){
int x=5;
int y=10;
int *p;
p=&x;
//p=&y;
cout<<"Value of x is= "<<x<<endl;
cout<<"address of x is= "<<&x<<endl;
cout<<"Value of p is= "<<p<<endl;
cout<<"Value of pointer p is= "<<*p<<endl;
return 0;


}
