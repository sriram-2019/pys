#include<iostream>
#include<stdlib.h>
using namespace std;
void insert();
void reverse();
void rev(int data);
void revse();
void display();
struct node{
    int data;
    struct node *link;
};
struct node *head=0,*newnode,*temp,*top=0;
int main(){
    int ch;
    do{
        cout<<"enter a choice ";
        cin>>ch;
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
                reverse();
                break;
            case 3:
                display();
                break;
        }
    }while(ch);
}
void reverse(){
    temp=head;
    while(temp!=0){
        rev(temp->data);
        temp=temp->link;
    }
    revse();
}
void revse(){
    temp=top;
    while(temp!=0){
        cout<<"\n"<<"revData"<<temp->data;
        temp=temp->link;
    }
}
void rev(int datas){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=datas;
    newnode->link=top;
    top=newnode;

}
void insert(){
    int datas;
    cout<<"enetr a data";
    cin>>datas;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=datas;
    newnode->link=0;
    if(head==0){
        head=newnode;
        temp=newnode;
    }
    else{
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