#include<stdio.h>
int main(){
    int mat[10][10],i,j,row,col;
    printf("\n Enter the order of matrix: \n\n");
    scanf("%d%d",&row,&col);
    printf("\n Enter the elements of matrix :");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n The elements in the matrix are: \n \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}