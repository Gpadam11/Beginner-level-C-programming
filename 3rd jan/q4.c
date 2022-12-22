#include <stdio.h>
 int main()
 {
 	int a,b,c,*p,*q,*r, max=0,min=0;
 	p=&a;
 	q=&b;
    r=&c;
 	printf("enter three values\n");
 	scanf("%d %d %d", p,q,r);
 	printf("values are %d %d %d\n",*p,*q,*r);	
    if(*p>=*q && *p>=*r)
    max=*p;
    else if(*q>=*r)
    max=*q;
    else
    max=*r;
    printf("Maximum value is %d",max);
    if(*p<=*q && *p<=*r)
    min=*p;
    else if(*q<=*r)
    min=*q;
    else
    min=*r;
    printf("\nMinimum value is %d",min);
 	return 0;
 }

 