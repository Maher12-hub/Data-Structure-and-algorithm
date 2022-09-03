#include<iostream>
using namespace std;
void increment(int *x){
*x=(*x)+1;
}

int main(){
int a=20;
increment(&a);
cout<<a<<endl;
}
