#include<iostream>
using namespace std;
int add_numbers(int *a,int *b){
int sum;
sum=*a+*b;
return sum;
}


int main(){
int x,y;
cout<<"enter two input integers:"<<endl;
cin>>x>>y;
int sum=add_numbers(&x,&y);
cout<<"sum is= "<<sum<<endl;
return 0;
}
