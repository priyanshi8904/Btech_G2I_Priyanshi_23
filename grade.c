include<stdio.h>
int main()
{int a,b,c,d,e,sum, percentage;
    printf("enter the value of a,b,c,d,e");
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    sum =a+b+c+d+e; 
    percentage =sum/5;
    printf("%d",percentage);
    if (percentage>=90 && percentage<=100)
    {printf("A"); }
    else if (percentage>=80 && percentage<=90)
    {printf ("B");}
    else if(percentage>=70 && percentage<=80)
    {printf("b");}
    else
    return 0;}
