/* 8. Program to calculate sum of complex no. using structure. */

#include<stdio.h>

struct complex{
	
	int real;
	int imag;
};

	void main(){
		struct complex c1={5,6};
		struct complex c2,sum;
		c2.real=7;
		c2.imag=8;
		
		sum.real=c1.real+c2.real;
		sum.imag=c1.imag+c2.imag;
		
		printf("Sum is %d+%di",sum.real,sum.imag);
	}
	
// 	Output
// 	Sum is 12+14i
