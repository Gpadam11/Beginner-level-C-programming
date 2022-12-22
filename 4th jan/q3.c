#include<stdio.h> 
int main()
{  
    int n;
    printf("enter the no. of elements");
    scanf("%d",&n);
    int a[n],m=n/2; 
    int *p, *q; 
    p=&a[0];
    q=&a[m];
    printf("enter the elements of the array\n"); 
    for(int i=0;i<m;i++)
    {
    scanf("%d",p+i); 
    }
    for(int i=m;i<n;i++)
    {
    scanf("%d",p+i); 
    }
     p=&a[0];
     q=&a[m];
    for(int i=0;i<m;i++)
    {
     *q=*(p+(m+i));
    printf("%d",*(q+i)); 
    }

    for(int i=0;i<m;i++)
    {
    printf("%d",*(p+i));
    }
    return 0;
}