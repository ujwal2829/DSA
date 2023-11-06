#include<stdio.h>
int main(){
    int arr[100],i,search,n;
    printf("\nEnter number of elments in array :");
    scanf("%d",&n);
    printf("enter the %d integers in array\n",n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter a number to search :");
    scanf("%d",&search);
    for(i=1;i<=n;i++){
        if(arr[i]==search){
            printf("%d is present at location %d\n",search,i);
        }
    }
    if(arr[i]!=search){
        printf("%d isn't present in the array.\n ",search);
    }
    return 0;
}
