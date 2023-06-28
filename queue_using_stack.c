#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;

void enqueue(int data)
{
    struct node*newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newNode;
    }
    else
    rear->next=newNode;
    rear=newNode;
}
void print(){
    if(front==NULL && rear==NULL){
        printf("underflow");
        exit(1);
    }
    else {
    struct node*temp=front;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
}
void dequeue()
{
   if(front==NULL && rear==NULL){
        printf("underflow");
        exit(1);
    }
    else{
        struct node*temp=front;
        front=front->next;
        free(temp);
        temp=NULL;
    }
}
int main()
{
    enqueue(7);
    enqueue(10);
    dequeue();
    print();
}