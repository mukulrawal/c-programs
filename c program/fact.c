#include<stdio.h>
#include<conio.h>
int main()
{
    int n, fact=1;
    printf("\n enter a positive number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
fact=fact*i;
    }
    printf("\n the factorial =%d",fact);
    return 0;
}