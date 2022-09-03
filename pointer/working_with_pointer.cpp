#include<iostream>
using namespace std;
int main(){
int *p;
int a=10;
cout<<"a= "<<a<<endl;
p=&a;
*p=12;
cout<<"a= "<<a<<endl;
return 0;
}
