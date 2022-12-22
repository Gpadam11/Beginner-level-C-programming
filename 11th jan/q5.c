#include<stdio.h> 
int copyfunc(int *p, int *q)
{   
    int i,a[5],b[5];

    for(i=0;i<5;i++)
    {   
         *(q+i)=*(p+i); 
         printf("%d ",*(q+i));
    }  
}
int main()
{   
    int a[5],b[5],i,z; 
    printf("Enter the elements of the first array\n");
    for(i=0;i<5;i++)
    {   
        scanf("%d",&a[i]);
    } 
     printf("The elements in the second array is:"); 
     copyfunc(a,b);
    return 0; 
}