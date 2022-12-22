#include<stdio.h> 
int main()
{
    int n=10;
    printf("\nNumbers from 1 To 10 are: ");
     printf("sum=%d", sum(n));
    return 0;
}
int sum(int n)
{
    if(n!=0)
        return (n+sum(n-1));
    else
        return n;
}