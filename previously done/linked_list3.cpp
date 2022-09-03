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

int main(){
Node *n1,*n2,*n3,*n4,*n5,*head;
n1=create_node(10,NULL);
cout<<"first data= "<<n1->data<<endl;
head=n1;
append(head,20);
n2=n1->next;
cout<<"Seconed data= "<<n2->data<<endl;
append(head,30);
n3=n2->next;
cout<<"third data= "<<n3->data<<endl;
return 0;

}

