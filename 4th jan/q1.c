#include<stdio.h> 
int main()
{  
    int a[5]; 
    int *p; 
    p=&a[0];
    printf("enter the elements of the array\n"); 
    for(int i=0;i<5;++i)
    {
        
    scanf("%d",p+i); 
    }
     for(int i=0;i<5;++i)
    {
    printf("%d",*(p+i));
    }
    return 0; 
}