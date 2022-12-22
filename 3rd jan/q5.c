#include<stdio.h> 

int main()
{  
    int a[5]; 
    int *p;
    p=&a[0]; 
    printf("enter the first element of the array\n"); 
    scanf("%d",p); 
    for(int i=0;i<5;i++)
    {   
        
         printf("Element %d is : %d\n",(i+1),*p);  
         *p=*p+2;
    } 
    return 0; 
}