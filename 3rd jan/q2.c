#include<stdio.h> 

int main()
{  
    int a[3], m=0; 
    int *p=&a[2]; 
        printf("enter third element of the array\n"); 
        scanf("%d",p); 
		for(int i=0;i<3;i++)
		{
		a[2-i]=*p;
        printf("The element number %d is : %d\n",(2-i),a[2-i]); 
		*p=*p-2; 
		}
    return 0; 
}