#include<stdio.h> 
int sum(int a, int b)
{
    return a+b;
} 
void swap(int *c, int *d)
{
    int temp; 
    temp=*c;
    *c=*d; 
    *d=temp; 
} 
int main()
{   
    int a=5,b=11; 
    printf("the value of a+b is %d\n",sum(a,b));  
    int x=6,y=3; 
    swap(&x,&y); 
    printf("the value of x is %d and value of y is %d",x,y);
    return 0;
}