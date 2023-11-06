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
    position = binarysearch(a,n,key);
    if(position == n){
        printf("\element is not present");
    }
    else
    {
        printf("\n%d is present at position %d\n",key,position+1);
    }
    return 0;
}
int binarysearch(int a[],int n, int key){
    int low=0,high=n-1,mid=0;
   while(low<=high){
    mid =(low+high)/2;
    if(key<a[mid])
            high = mid-1;
    else if(key>a[mid])
            low=mid+1;
    else if(key==a[mid])
            return(mid);
   }
   return -1;
}