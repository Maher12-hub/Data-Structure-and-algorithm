#define STACK_MAX 100
#include<iostream>
using namespace std;
typedef struct{
int top;
int data[STACK_MAX];
}stack;

void push(stack *s,int item){
    cout<<"pushed item="<<item<<endl;
if(s->top < STACK_MAX){
    s->data[s->top]=item;
    s->top=s->top+1;
}
else cout<<"stack is full"<<endl;
}
int pop(stack *s){
int item;
if(s->top==0){
    cout<<"Stack is empty"<<endl;
    return -1;
}
else{
    s->top=s->top-1;
    item=s->data[s->top];
}
return item;

}
int main(){
stack my_stack;
my_stack.top=0;
int item;
push(&my_stack,10);
push(&my_stack,20);
push(&my_stack,30);
cout<<"\n\n"<<endl;
item=pop(&my_stack);
cout<<"popped item="<<item<<endl;
item=pop(&my_stack);
cout<<"popped item="<<item<<endl;
item=pop(&my_stack);
cout<<"popped_item="<<item<<endl;
return 0;
}
