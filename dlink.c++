#include<iostream>
#include<stdlib.h>
using namespace std;
void insert();
void display();
void rev();
struct node{
    int data;
    struct node *link;
    struct node *prev;
};
struct node *head=0,*newnode,*temp;
int main(){
    int ch;
    do{
        cout<<"enter a choice";
        cin>>ch;
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
                rev();
                break;
            case 3:
                display();
                break;
        }
    }while(ch);
}
void insert(){
    int datas;
    cout<<"enre a daadad";
    cin>>datas;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=datas;
    newnode->link=0;
    newnode->prev=0;
    if(head==0){
        head=newnode;
        temp=newnode;
    }
    else{
        newnode->prev=temp;
        temp->link=newnode;
        temp=newnode;
    }

}
void display(){
    temp=head;
    while(temp!=0){
        cout<<"data"<<temp->data;
        temp=temp->link;
    }

}
void rev(){
    struct node *t;
    cout<<"\n"<<"Data"<<temp->data;
    t=temp->prev;
    while(t!=0){
        cout<<"\n"<<"Data"<<t->data;
        t=t->prev;
    }

    
}