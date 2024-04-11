#include<stdio.h>
#include<conio.h>
int main()
{
    int row,column,i,j;
    printf("enter no of rows and columns");
    scanf("%d%d",&row,&column);
    for(i=1;i<row;i++)
    {
      for(j=1;j<=column;j++)
      printf("%d \n",i*j);  
    }
    printf("\n");
    return 0;
}