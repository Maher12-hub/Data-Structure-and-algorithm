#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int a=1025;
int *p;
p=&a;
cout<<"Address of p is= "<<p<<" value of p is ="<<*p<<endl;
char *p0;
p0=(char*) &a;
cout<<"Address of p is= "<<p0<<" value of p is ="<<*p0<<endl;
return 0;
}
