#include<iostream>
using namespace std;
void print(char *s2){
int i=0;
/**
while(s2[i]!='\0'){
    cout<<s2[i];
    i++;
}
**/
while(*s2!='\0'){
    cout<<*s2;
    s2++;
}
cout<<endl;

}
int main(){
char s1[10]="maher";
print(s1);
return 0;
}
