#include<iostream>
using namespace std;
int main(){
int x=10;
int *p;
p=&x;
*p=15;
int **q=&p;
cout<<*q<<endl;
cout<<*(*q)<<endl;
//int ***r=&q;
//cout<<***r<<endl;
return 0;
}
