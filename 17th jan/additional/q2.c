#include<stdio.h> 
int main()
{
int a[]={9,6,8,4,3};
int *p[]={a,a+1,a+2,a+3,a+4};
int **ptr=p+2;
--*ptr;
printf("%d",**ptr);
}