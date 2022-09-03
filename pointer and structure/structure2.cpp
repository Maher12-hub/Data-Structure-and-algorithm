#include<iostream>
using namespace std;
struct student{
string name;
int age;
};


int main(){
student student1,student2;
cout<<"Enter name and age for student1:";
cin>>student1.name;
cin>>student1.age;
cout<<"student1 name= "<<student1.name<<" and age= "<<student1.age<<endl;
cout<<"\n \n"<<endl;
cout<<"Enter name and age for student2:";
cin>>student2.name;
cin>>student2.age;
cout<<"student2 name= "<<student2.name<<" and age= "<<student2.age<<endl;
return 0;

}
