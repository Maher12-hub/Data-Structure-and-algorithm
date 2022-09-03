#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"enter two integers:"<<endl;
cin>>x>>y;
int *a,*b;
a=&x;
b=&y;
if(*a>*b) cout<<x<<" is maximum:"<<endl;
else cout<<y<<" is maximum:"<<endl;
return 0;
}
