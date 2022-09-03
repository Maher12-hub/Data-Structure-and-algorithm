#include<iostream>
using namespace std;
struct student{
int roll;
char name[20];
};


int main(){
struct student s1,s2;
cout<<"enter the information for student s1"<<endl;
cin>>s1.roll;
cin>>s1.name;
cout<<"enter the information for student s2"<<endl;
cin>>s2.roll;
cin>>s2.name;

cout<<"information of s1 student is:"<<endl;
cout<<s1.roll<<endl;
cout<<s1.name<<endl;

cout<<"information of s2 student is:"<<endl;
cout<<s2.roll<<endl;
cout<<s2.name<<endl;
}
