#include<stdio.h>
int main(){
    int a[10],key,n,i,position=-1;
    printf("\n How many elementsin an array :");
    scanf("%d",&n);
    printf("\n Enter %d number",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n enter element to search : ");
    scanf("%d",&key);
    position = linearsearch(a,n,key);
    if(position == n){
        printf("\element is not present");
    }
    else
    {
        printf("\n%d is present at position %d\n",key,position+1);
    }
    return 0;
}
int linearsearch(int a[],int n, int key){
    int i=0;
    a[n]=key;
    while(a[i]!=key){
     i++;
    }
    return i;
}
