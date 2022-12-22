#include <stdio.h>
 int main(void)
 {
 	int a,b,*p,*q, temp;
 	printf("enter a and b\n");
 	scanf("%d%d", &a,&b);
 	printf("values before swapping:\na=%d\nb=%d\n",a,b);	
 	p=&a;
 	q=&b;
 	temp=*q;
 	*q=*p;
 	*p=temp;
 	printf("values after swapping:\na=%d\nb=%d",a,b);
 	return 0;
 }