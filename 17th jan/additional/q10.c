#include<stdio.h> 
int main()
{
    int a[]={5,6,*(a+1),a[2]};
    for(int i=0;i<4;i+=3)
    printf("%d", a[i--]);
}