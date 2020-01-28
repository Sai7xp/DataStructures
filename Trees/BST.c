#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}Node;

Node* create(int value){
    Node* newNode= (Node*)malloc(sizeof(Node));
    newNode->data=value;
    newNode->left=newNode->right=NULL;
    return newNode;
}

Node* insert(Node* root, int value){
    if(root==NULL) return create(value);
    else if(value<root->data)
    root->left=insert(root->left,value);
    else if(value>root->data)
    root->right=insert(root->right,value);

    return root;
}

void inorder(Node* root){
    if(root==NULL) return ;
    inorder(root->left);
    printf("%d-->",root->data);
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL) return ;
    printf("%d-->",root->data);
    preorder(root->left);
    preorder(root->right);
}


 void postorder(Node* root){
     if(root==NULL) return ;
     postorder(root->left);
     postorder(root->right);
     printf("%d-->",root->data);
 }
int search(Node* root,int value){
    if(root==NULL) return 0;
    else if(root->data==value) return root->data;
    else if(root->data<value) return search(root->right,value);
    else if(root->data>value) return search(root->left,value);
    else return 0;
}
int main(){
    Node* root=NULL;
    root=insert(root,8);
    insert(root,9);
    insert(root,22);   
    insert(root,99);
    insert(root,1);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    int srch = search(root,99);
    if(srch==0){
        printf("\nElement not present in the bst");
    }
    else printf("\n%d",srch);
}
