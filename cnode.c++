#include<iostream>
#include<stdlib.h>
using namespace std;
void insert();
void display();
void insert_beg();
void insert_end();
void del_firs();
void del_end();
void del_pos();
struct node{
    int data;
    struct node *link;
};
struct node *head=0,*newnode,*temp,*t;
int main(){
    int ch;
    do{
        cout<<"enter a ch";
        cin>>ch;
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
                insert_beg();
                break;
            case 3:
                display();
                break;
            case 4:
                insert_end();
                break;
            case 5:
                del_firs();
                break;
            case 6:
                del_end();
                break;
            case 7:
                del_pos();
                break;
        }
    }while(ch);
}
void insert(){
    int datas;
    cout<<"emter the data";
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
    temp->link=head;

}
void display(){
    temp=head;
    while(temp->link!=head){
        cout<<"\n"<<"data"<<temp->data;
        temp=temp->link;
    }
    cout<<"\n"<<"data"<<temp->data;
}
void insert_beg(){
    int datas;
    cout<<"data";
    cin>>datas;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->link=head;
    head=newnode;
    temp->link=head;   
}
void insert_end(){
    int datas;
    cout<<"enter the data";
    cin>>datas;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=datas;
    newnode->link=0;
    temp=head;
    while(temp->link!=head){
        temp=temp->link;
    }
    temp->link=newnode;
    newnode->link=head;
    temp=newnode;
}
void del_firs(){
    t=head;
    head=t->link;
    free(t);
    temp->link=head;

}
void del_end(){
    struct node *prev;
    t=head;
    while(t->link!=head){
        prev=t;
        t=t->link;
    }
    prev->link=head;
    free(t);  
}
void del_pos(){
    struct node *prev;
    int pos,i=0;
    cout<<"netr a pos";
    cin>>pos;
    t=head;
    while(i<pos){
        prev=t;
        t=t->link;
        i++;
    }
    prev->link=t->link;
    free(t);
    
}

