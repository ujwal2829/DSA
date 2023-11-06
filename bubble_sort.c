#include<stdio.h>
int main(){
    int array[100],n,i,j,temp;
    printf("\n Enter how much size you want to give your array :->");
    scanf("%d",&n);
    printf("\n Enter the array alements :->");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(array[j]>array[j+1]){//for decreasing order use '<' instead of '>'//
           temp =array[j];
           array[j] = array[j+1];
           array[j+1]=temp;
           }
       }
    }