#include<stdio.h>
#include<stdlib.h>
#include"singly.h"
void main(){
    int ch;
    do{
        printf("\n1. create");
        printf("\n2. display");
        printf("\n3. Exit");
        printf("\nEnter Your choice :");
        scanf("%d",&ch);
        switch(ch){
            case 1: create();
                break;
            case 2: display();
                break;
            case 3: exit(0);
        }
    }while(ch!=3);
}