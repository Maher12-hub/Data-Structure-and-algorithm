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
if(new_node==NULL){
    cout<<"error!"<<endl;
    exit(1);
}
new_node->data=item;
new_node->next=next;
return new_node;
}

int main(){
    Node *new_node;
    new_node=create_node(100,NULL);
    cout<<"Data= "<<new_node->data<<endl;
    return 0;

}
