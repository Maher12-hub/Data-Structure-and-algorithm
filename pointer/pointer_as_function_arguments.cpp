#include<iostream>
using namespace std;
int  increment(int *x){
*x=*x+1;
return *x;
}

int main(){
int x=10;
int *p=&x;
cout<<increment(p)<<endl;
return 0;
}
