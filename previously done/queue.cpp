#define q_size 4
#include<iostream>
using namespace std;
typedef struct{
int data[q_size+1];
int head,tail;

}queue;

void enqueue(queue *q,int item){
    if((q->tail+1)%(q_size+1)==q->head){
        cout<<"queue is full"<<endl;
        return;
    }
    q->data[q->tail]=item;
    q->tail=((q->tail+1) % (q_size+1));

}
int dequeue(queue *q){
int item;
if(q->tail==q->head){
    cout<<"queue is empty"<<endl;
    return -1;
}
item=q->data[q->head];
q->head=((q->head+1) % (q_size+1));
return item;

}

int main(){
int item;
queue my_q;
my_q.head=0;
my_q.tail=0;
enqueue(&my_q,10);
cout<<"enqueued item=10 "<<" tail= "<<my_q.tail<<endl;
enqueue(&my_q,20);
cout<<"enqueued item=20 "<<" tail= "<<my_q.tail<<endl;
enqueue(&my_q,30);
cout<<"enqueued item=30 "<<" tail= "<<my_q.tail<<endl;
enqueue(&my_q,40);
cout<<"enqueued item=40 "<<" tail= "<<my_q.tail<<endl;
cout<<endl;
cout<<"Beginning of head= "<<my_q.head<<endl;
item=dequeue(&my_q);
cout<<"item= "<<item<<" head= "<<my_q.head<<endl;
item=dequeue(&my_q);
cout<<"item= "<<item<<" head= "<<my_q.head<<endl;
item=dequeue(&my_q);
cout<<"item= "<<item<<" head= "<<my_q.head<<endl;
item=dequeue(&my_q);
cout<<"item= "<<item<<" head= "<<my_q.head<<endl;
return 0;
}
