//TO Call all the operations.
#include<stdio.h>
#include<stdlib.h>
#include"slip_1_q1.h"
int main(){
    int ch;
    do{
        printf("\n1. create");
        printf("\n2. Forward Display");
        printf("\n3. Exit");
        printf("\nEnter Your choice ");
        scanf("%d",&ch);
        switch(ch){
            case 1:create();
            break;
            case 2:forward_display();
            break;
            case 3:exit(0);
        }
    }
    while(ch!=3);
    return 0;
}