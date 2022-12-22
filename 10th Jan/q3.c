#include<stdio.h> 
void fibo(int n)
{
    int a=0,b=1,c;
    while(a<=n)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
}
void main()
{
    int n;
    printf("Enter the range");
    scanf("%d",&n);
    printf("Fibonaccii series= ");
    fibo(n);
}