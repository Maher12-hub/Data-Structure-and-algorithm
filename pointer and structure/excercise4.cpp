#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int *x;
int *y;
int sum;
x=&a;
y=&b;
sum=*x+*y;
cout<<"sum="<<sum<<endl;
return 0;
}
