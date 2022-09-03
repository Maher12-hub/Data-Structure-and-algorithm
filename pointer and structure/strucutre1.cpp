#include<iostream>
using namespace std;
struct student{
string name;
int class_standard;
int age;
char section;
};
student student1,student2;//global variable
int main(){
//student student1,student2,student3;--local variable
student1.name="Maher";
student1.class_standard=10;
student1.age=16;
student1.section='c';
cout<<"Name= "<<student1.name<<endl;
cout<<"class_standard= "<<student1.class_standard<<endl;
cout<<"age= "<<student1.age<<endl;
cout<<"section= "<<student1.section<<endl;
return 0;
}
