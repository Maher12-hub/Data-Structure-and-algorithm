#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
int data;
Node *next;

};
Node *create_node(int item,Node *next){
Node *new_node=(Node *) malloc(sizeof(Node));
if(new_node == NULL){
    cout<<"Error!"<<endl;
    exit(1);
}
new_node->data=item;
new_node->next=next;
return new_node;
}
Node *append(Node *head,int item){
Node *new_node=create_node(item,NULL);
Node *current_node=head;
while(current_node->next != NULL){
    current_node=current_node->next;
}
current_node->next=new_node;
return head;
}
void insert_node(Node *node,int item){
Node *new_node=create_node(item,node->next);
node->next=new_node;
}
int main(){
Node *n1,*n2,*n3,*n4,*head;
n1=create_node(10,NULL);
head=n1;
n2=append(head,30);
insert_node(n2,20);
cout<<"first data= "<<n2->data<<endl;
n3=n2->next;
cout<<"Seconed data= "<<n3->data<<endl;
n4=n3->next;
cout<<"Third data= "<<n4->data<<endl;
return 0;
}
