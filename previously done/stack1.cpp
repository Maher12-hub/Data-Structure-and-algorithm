#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int is_balanced(char input[]){
char stack[100],last_char;
int i,top=0,len;
len=strlen(input);
for(i=0;i<len;i++){
        if(input[i]=='('){
           stack[top]='(';
           top++;
           }
       else if(input[i]==')'){
        if(top==0) return 0;
        top--;
        last_char=stack[top];
        if(last_char != '(') return 0;
       }
}
if(top==0) return 1;
else return 0;
}
int main(){
char input[100];
cin>>input;
if(is_balanced(input)) cout<<input<<"is balanced:"<<endl;
else cout<<input<<" is not balanced:"<<endl;
return 0;

}
