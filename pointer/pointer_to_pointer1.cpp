#include<iostream>
using namespace std;
int main(){
int x=10;
int *p=&x;
cout<<*p<<endl;
int **q=&p;
*p=20;
cout<<**q<<endl;
return 0;
}
