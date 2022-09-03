#include<iostream>
using namespace std;
int main(){
int x=10,y=20;
int *a;
int *b;
a=&x;
b=&y;
int sum;
sum=*a + *b;
cout<<"sum= "<<sum<<endl;
return 0;
}
