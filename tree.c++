#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    struct node *left;
    struct node *right;
    int data;
};
struct node *create(){
    int data;
    struct node *newnode;
    cout<<"enter the data";
    cin>>data;
    newnode=(struct node *)malloc(sizeof(struct node*));
    if(data==0){
        return 0;
    }
    else{
        newnode->data=data;
        cout<<"enter the left node of"<<data;
        newnode->left=create();
        cout<<"entre the right node of "<<data;
        newnode->right=create();
        return newnode;
    }

}
void pre(struct node *root){
    if(root!=NULL){
        cout<<root->data;
        pre(root->left);
        pre(root->right);
    }
    
int main(){
    struct node *root;
    root=create();
    pre(root);
}