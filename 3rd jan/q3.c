#include <stdio.h>
 int main()
 {
 	int a,b,*p,*q;
	 p=&a;
	 q=&b;
 	printf("enter two values\n");
 	scanf("%d %d", p,q);
 	printf("values are %d and %d",*p,*q);	
 	return 0;
 }