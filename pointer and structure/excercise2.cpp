#include<iostream>
using namespace std;
int main(){
int m=29;
int *ab;
ab=&m;
cout<<"address of ab is= "<<&ab<<endl;
cout<<"content of pointer ab is= "<<*ab<<endl;
m=34;
cout<<"address of ab is= "<<&ab<<endl;
cout<<"content of pointer ab is= "<<*ab<<endl;

*ab=7;
cout<<"address of m is= "<<&m<<endl;
cout<<"Value of m is= "<<m<<endl;
return 0;

}
