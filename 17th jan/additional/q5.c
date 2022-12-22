#include<stdio.h> 
int main()
{
    int a=1;
    int *p;
    p=&a;
    printf("%p %p", *&p, &*p);

}