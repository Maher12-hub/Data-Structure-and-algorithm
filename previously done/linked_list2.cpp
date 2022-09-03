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
new_node->data=item;
new_node->next=next;
return new_node;
}
Node *prepend(Node *head,int item){
Node *new_node=create_node(item,head);
return new_node;
}
int main(){
Node *n1,*n2,*head,*n3;
n1=create_node(20,NULL);
head=n1;
head=prepend(head,10);
n2=head;
cout<<"first_data= "<<n2->data<<endl;
n3=n2->next;
cout<<"Seconed data= "<<n3->data<<endl;
return 0;
}
