#include<stdio.h>
#include<conio.h>
int main()
{
    int b;
    printf("enter a non zero no ");
    scanf("%d",&b);
    if(b%2==0)
    {
        printf("\n b=%d is even",b);
    }
    else
    {
        printf("\n b=%d is odd",b);
    }
    return 0;
}