#include<iostream>
using namespace std;
struct person{
char name[25];
int age;
float salary;
};
int main(){
int i;
person person[4];
for(i=0;i<4;i++){
    cout<<"Enter information for person"<<i+1<<":::"<<endl;
    cout<<"Enter Name:";
    cin>>person[i].name;
    cout<<"Enter age:";
    cin>>person[i].age;
    cout<<"Enter salary:";
    cin>>person[i].salary;
    cout<<"\n"<<endl;


}


for(i=0;i<4;i++){
    cout<<" information of person"<<i+1<<":::"<<endl;
    cout<<"Name= "<<person[i].name<<endl;
    cout<<"Age= "<<person[i].age<<endl;
    cout<<"Salary= "<<person[i].salary<<endl;
    cout<<"\n"<<endl;


}
return 0;

}
