#include<iostream>
using namespace std;
struct person{
char name[25];
int age;
float salary;

};
void func(struct person p,int i){
    cout<<"\n"<<endl;
    cout<<"Information of person"<<i+1<<"::"<<endl;
    cout<<"Name= "<<p.name<<endl;
    cout<<"Age= "<<p.age<<endl;
    cout<<"Salary= "<<p.salary<<endl;
    cout<<"\n"<<endl;


}
int main(){
person person[4];
for(int i=0;i<4;i++){
  cout<<"Enter information of person"<<i+1<<":::"<<endl;
  cout<<"Enter name: ";
  cin>>person[i].name;
  cout<<"Enter age: ";
  cin>>person[i].age;
  cout<<"Enter salary: ";
  cin>>person[i].salary;
  func(person[i],i);
}
return 0;
}
