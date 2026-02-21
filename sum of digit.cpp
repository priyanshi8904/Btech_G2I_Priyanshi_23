#include<stdio.h>
#include<conio.h>
int main()
{int n,sum=0,r;
printf("enter any number");
scanf("%d",&n);
while(n>0)
{r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum of digit of a given no.is %d",sum);
return 0;
}
