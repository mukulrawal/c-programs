#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1,c;
    printf("enter no of terms");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
      printf("%d ",a);
      c=a+b;
       a=b;
       b=c;
    }
    return 0;
}
