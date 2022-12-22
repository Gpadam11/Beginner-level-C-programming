#include<stdio.h>
void fibonthno(int n)
{
    int a,b,c;
    int i;
    a=0,b=1;
    for(i=1;i<=(n-2);i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
}

int main()
{
    int no;
    printf("Enter the value of n \n");
    scanf("%d",&no);  
    printf("The %dth number of the fibonacci series is ",no);
    fibonthno(no);
    return 0;
}