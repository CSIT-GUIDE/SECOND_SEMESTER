/* 12. Program to show value uing pointer within  structure. */

#include<stdio.h>

struct sample{
	int a;
	struct sample *p;
};

	void main(){
		struct sample s1,s2;
		
		s1.a=5;
		s1.p=&s2;
		
		s2.a=7;
		s2.p=&s1;
		
		printf("Value of a in s1=%d\n",s1.a);
		printf("Value of a in s2=%d",s1.p->a);
	}
	
//	Output
//	Value of a in s1=5
// 	Value of a in s2=7	
	
