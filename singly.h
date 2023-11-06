#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *next;
};
struct node *head=NULL,*nw,*ptr;
void create(){
    int i,n;
    printf("\n Enter no of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;++i){
        nw=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter node data :");
        scanf("%d",&nw->data);
        nw->next=NULL;
        if(head==NULL){
            head=ptr=nw;
        }
        else{
            ptr->next=nw;
            ptr=ptr->next;
        }
    }
}
void display() {
    ptr = head;
    printf("\nSingly Linked List Elements are :");
    while (ptr != NULL) {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
}
}