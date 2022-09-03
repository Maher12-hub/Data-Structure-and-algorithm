#include<iostream>
using namespace std;
struct person{
int age;
float salary;
};

int main(){
person person1,person2;
cout<<"enter information for person1:";
cin>>person1.age>>person1.salary;
cout<<"enter information for person2:";
cin>>person2.age>>person2.salary;
if(person1.age==person2.age && person1.salary==person2.salary)
    cout<<"person1 is equal to person2"<<endl;
else cout<<"person1 is not equal to person2"<<endl;
}
