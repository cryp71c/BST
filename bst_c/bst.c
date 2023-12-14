#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *set_data(int data){
    struct node *nN = (struct node*) malloc(sizeof(struct node));
    nN->data = data;
    nN->left = NULL;
    nN->right = NULL;
    return(nN);
}

void add_node(int data, struct node *cN){
    if(data == cN->data){
        return;
    }
    if(data > cN->data){
        if(cN->right != NULL){
            add_node(data, cN->right);
        }
        cN->right=set_data(data);
    }
    else{
        if(cN->right != NULL){
            add_node(data, cN->left);
        }
        cN->left=set_data(data);
    }
}

void tear_down(struct node *cN){
    if(cN == NULL || cN == 0){
        return;
    }
    tear_down(cN->left);
    tear_down(cN->right);
    free(cN);
}

int main(){
    struct node *rNp = (struct node*) malloc(sizeof(struct node));
    rNp->data=75;
    rNp->right=NULL;
    rNp->left=NULL;
    add_node(25, rNp);
    add_node(100, rNp);
    add_node(120, rNp);
    add_node(1, rNp);
    add_node(85, rNp);
    tear_down(rNp);
    return 0;
}