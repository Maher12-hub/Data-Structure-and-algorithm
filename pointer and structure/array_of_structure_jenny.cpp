#include<iostream>
using namespace std;
struct student{
char name[20];
int roll;
};

int main(){
struct student s[10];
for(int i=0;i<10;i++){
    cout<<"enter information for s"<<i<<" student:"<<endl;
    cin>>s[i].name;
    cin>>s[i].roll;

}

for(int i=0;i<10;i++){
   cout<<"information of s"<<i<<" student:"<<endl;
   cout<<s[i].name<<endl;
   cout<<s[i].roll<<endl;

}
return 0;
}
