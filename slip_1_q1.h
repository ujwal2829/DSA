//header file for Doubly Linked List with following operations. 
//1)Create  2)Display  3)Insert at first 
//4)Insert in between  5)Insert at last   6)Delete at first 
//7)Delete in between  8)Delete at last 9)Search.
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
void insert_first()
{
ptr=head;
nw=(struct node *)malloc(sizeof(struct node));
printf("Enter node data ");
scanf("%d",&nw->data);
nw->next=NULL;
nw->prev=NULL;
nw->next=head;
head->prev=nw;
head=nw;
}
void insert_between()
{
int pos,count=1;
ptr=head;
printf("\nEnter position : ");
scanf("%d",&pos);
nw=(struct node *)malloc(sizeof(struct node));
printf("Enter node data ");
scanf("%d",&nw->data);
nw->next=NULL;
nw->prev=NULL;
while(count!=pos-1)
{
ptr=ptr->next;
count++;
}
nw->next=ptr->next;
ptr->next->prev=nw;
ptr->next=nw;
nw->prev=ptr;
}
void insert_last()
{
ptr=head;
nw=(struct node *)malloc(sizeof(struct node));
printf("Enter node data ");
scanf("%d",&nw->data);
nw->next=NULL;
nw->prev=NULL;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=nw;
nw->prev=ptr;
}

void delete_first()
{
ptr=head;
temp=head;
head=head->next;
head->prev=NULL;
free(temp);
}
void delete_between()
{
int pos,count=1;
ptr=head;
printf("\nEnter position : ");
scanf("%d",&pos);
while (count !=pos-1)
{
ptr=ptr->next;
count++;
}
temp=ptr->next;
ptr->next=temp->next;
temp->next->prev=ptr;
free(temp);
}
void delete_last()
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
temp=ptr;
ptr->prev->next=NULL;
free(temp);
}
void search()
{
int ele,flag=0;
ptr=head;
printf("\nEnter element to be search : ");
scanf("%d",&ele);
while(ptr!=NULL)
{
if(ptr->data==ele)
{
flag=1;
break;
}
else
ptr=ptr->next;
}
if(flag==1)
printf("Element is found");

else
printf("Element is not found");
}
