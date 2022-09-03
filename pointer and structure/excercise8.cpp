#include<iostream>
#include<string>
using namespace std;
int calculate_string_length(char *s1){
int count=0;
while(*s1 != '\0'){
    count++;
    s1++;
}
return count;


}

int main(){
char s1[25];
cin>>s1;
int l=calculate_string_length(s1);
cout<<l<<endl;
return 0;

}
