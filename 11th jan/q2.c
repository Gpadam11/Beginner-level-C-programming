#include<stdio.h> 
float mathsop(int a, int b) 
{
    int  max, min; 
    double avg;
    avg=(a+b)/2.0; 
    printf("avg: %lf\n",avg);
    if(a>b)
    {
        max=a; 
        min=b;   
        printf("max is %d and min is %d",a,b); 
    } 
    else 
    {
        max=b;
        min=a; 
        printf("max is %d and min is %d",b,a);
    }
}
int main()
{   
    int a,b; 
    printf("Enter 2 numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    mathsop(a,b); 
    return 0;
} 