#include<iostream>
using namespace std;
struct person{
int age;
float salary;
};

int main(){
person person[7];
int i;
for(i=0;i<7;i++){
    cout<<"enter informatio for person "<<i+1<<":"<<endl;
    cout<<"Enter age: ";
    cin>>person[i].age;
    cout<<"Enter salary: ";
    cin>>person[i].salary;
    cout<<endl;
}
cout<<"\n"<<endl;
for(i=0;i<7;i++){
    cout<<"person"<<i+1<<" information---"<<endl;
    cout<<"Age: "<<person[i].age<<endl;
    cout<<"Salary: "<<person[i].salary<<endl;
    cout<<"\n";
}
return 0;
}
