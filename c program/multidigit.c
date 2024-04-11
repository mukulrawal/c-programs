#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,r;
    printf("enter a multidigit no");
    scanf("%d",&n);
    do
{
    r=n%10;
    sum=sum+r;
    n=n/10;
    }
    while(n!=0);
    printf("\n the sum is :%d",sum);
    return 0;
}