/* 11. Pointer show values using pointer within structure. */

#include<stdio.h>

struct sample{
	int a;
	float x;
	int *p;
};

	void main(){
	struct sample s1,s2;
	
	int a1=43;
	int a2=74;
	
	s1.a=5;
	s1.x=7.3;
	s1.p=&a1;
	
	s2.a=6;
	s2.x=8.4;
	s2.p=&a2;
	
	printf("Values for s1=\n");
	printf("s1.a=%d, s1.x=%.2f, s1.p=%u\n",s1.a,s1.x,s1.p);
	printf("\nValues for s2=\n");
	printf("s2.a=%d, s2.x=%.2f, s2.p=%u\n",s2.a,s2.x,s2.p);
	}
	
//	Output
//	Values for s1=
//	s1.a=5, s1.x=7.30, s1.p=2293308
//
//	Values for s2=
//	s2.a=6, s2.x=8.40, s1.p=2293304

