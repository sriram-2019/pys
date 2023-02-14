#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *link;
    struct node *prev;
};
struct node *head=0,*newnode,*temp,*t;
void insert(){
    int d;
    cout<<"dtata";
    cin>>d;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->link=0;
    newnode->prev=0;
    if(head==0){
        head=newnode;
        temp=newnode;
        head->prev=0;
    }
    else{
        temp->link=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    temp->link=head;
}
void display(){
    t=head;
    while(t!=head){
        cout<<"\n"<<"data"<<t->data;
        t=t->link;
    }
}
int main(){
    int ch;
    do{
        cout<<"chjoicr";
        cin>>ch;
        switch(ch){
            case 1:
                insert();
                break;
            case 8:
                display();
                break;
        }
    }while(ch);
}