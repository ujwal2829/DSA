#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next,*prev;
};
struct node *head=NULL,*nw,*ptr,*temp;
void create()
{
int i,n;
printf("Enter number of nodes : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
nw=(struct node*)malloc(sizeof(struct node));
printf("\nEnter node data : ");
scanf("%d",&nw->data);
nw->next=NULL;
nw->prev=NULL;
if(head==NULL)
{
head=ptr=nw;
}
else
{
ptr->next=nw;
nw->prev=ptr;
ptr=ptr->next;
}
}
}
void forward_display()
{
ptr=head;
printf("\nLink list elements are :\n");
while(ptr!=NULL)
{
printf("\t%d\t",ptr->data);
ptr=ptr->next;
}
}