#include<stdio.h>
int main(){
    int n,a[20];
    printf("\n How many elements in array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       printf("\nEnter the value of %d element",i+1);
       scanf("%d",&a[i]);
    }
    printf("stored array elements are\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d\n",a[i]);
    }
    return 0;
}