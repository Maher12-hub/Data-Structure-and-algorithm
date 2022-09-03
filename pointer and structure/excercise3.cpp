#include<iostream>
using namespace std;
int main(){
int m=30;
float fx=300.60;
char cht='z';
int *ptr1;
float *ptr2;
char *ptr3;
ptr1=&m;
ptr2=&fx;
ptr3=&cht;
cout<<"using & operator"<<endl;
cout<<"address of m is= "<<&m<<endl;
cout<<"address of fx is= "<<&fx<<endl;
cout<<"address of cht is= "<<(void *)&cht<<endl;
cout<<"using * and & operator"<<endl;
cout<<"value at address of m is= "<<*(&m)<<endl;
cout<<"value at address of fx is= "<<*(&fx)<<endl;
cout<<"value at address of cht is= "<<*(&cht)<<endl;

cout<<"using only pointer operator"<<endl;
cout<<"value at address of m is= "<<*ptr1<<endl;
cout<<"value at address of fx is= "<<*ptr2<<endl;
cout<<"value at address of cht is= "<<*ptr3<<endl;

cout<<"address of m is= "<<ptr1<<endl;
cout<<"address of fx is= "<<ptr2<<endl;
cout<<"address of cht is= "<<(void *)ptr3<<endl;





}
