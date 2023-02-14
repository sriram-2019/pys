#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *link;
};
struct node *head=0,*newnode,*temp,*front=0,*rear=0;
void enqueue(){
    int d;
    cout<<"data";
    cin>>d;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->link=0;
    if(rear==0 && front==0){
        rear=newnode;
        front=newnode;
    }
    else{
        rear->link=newnode;
        rear=newnode;
    }
    rear->link=front;


}
void display(){
    temp=front;
    while(temp!=rear){
        cout<<"\n"<<"data"<<temp->data;
        temp=temp->link;
    }
    }
void dequeue()
    temp=front;
    front=temp->link;
}
int main(){
    int ch;
    do{
        cout<<"enter a cho";
        cin>>ch;
        switch(ch){
            case 1:
                enqueue();
                break;
            case 2:
                display();
                break;
            case 3:
                dequeue();
                break;
        }
    }while(ch);
}