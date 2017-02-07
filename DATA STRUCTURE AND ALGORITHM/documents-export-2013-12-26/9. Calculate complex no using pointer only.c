/* 9. Program to calculate sum  of complex no. using pointer 
   and structure. */
   
#include<stdio.h>

struct complex{
	
	int real;
	int imag;
};

	void main(){
		struct complex c1={5,6},c2={7,8},sum;
		struct complex *p;

		p=&sum;
		
		
		(*p).real=c1.real+c2.real;
		(*p).imag=c1.imag+c2.imag;
		
		printf("Sum is %d+%di",sum.real,sum.imag);
	}
	
// 	Output
// 	Sum is 12+14i
