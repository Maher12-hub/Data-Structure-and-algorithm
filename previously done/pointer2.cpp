#include<iostream>
using namespace std;
int main(){
int x=10,y=20,z=30;
int *ptr;
ptr=&x;
cout<<"X= "<<*ptr<<endl;
ptr=&y;
cout<<"y= "<<*ptr<<endl;
ptr=&z;
cout<<"z= "<<*ptr<<endl;


}
