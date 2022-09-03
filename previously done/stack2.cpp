#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int is_balanced(char input[]){
int i,len,top=0;
char stack[100],last_char;
len=strlen(input);
for(i=0;i<len;i++){
    if(input[i]=='(' || input[i]=='{' || input[i]== '['){
        stack[top]=input[i];
        top++;

       }
    else if(input[i]==')' || input[i]=='}' || input[i]== ']'){
        if(top==0) return 0;
        top--;
        last_char=stack[top];
        if(input[i]==')' && last_char != '(') return 0;
        else if(input[i]=='}' && last_char != '{') return 0;
        if(input[i]==']' && last_char != '[') return 0;
    }
}
if(top==0) return 1;
else return 0;

}
int main(){
char input[100];
cin>>input;
if(is_balanced(input)) cout<<input<<" is balanced"<<endl;
else cout<<input<<" is not balanced"<<endl;
return 0;
}
