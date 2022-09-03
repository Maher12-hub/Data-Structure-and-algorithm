#include<iostream>
using namespace std;
struct student{
int roll_no;
char name[20];
};
int main(){
struct student s[5];
cout<<"Enter the information of students:"<<endl;
for(int i=0;i<5;i++){
    cin>>s[i].roll_no;
    cin>>s[i].name;
}
cout<<"Entered information for the student is:"<<endl;
for(int i=0;i<5;i++){
    struct student *ptr=&s[i];
    cout<<ptr->roll_no<<endl;
    cout<<ptr->name<<endl;
}
return 0;
}
