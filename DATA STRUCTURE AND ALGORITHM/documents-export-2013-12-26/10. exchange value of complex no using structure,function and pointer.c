/* 10. Program to exchange values of comple no. using function,
   pointer and structure. */
   
#include<stdio.h>

struct complex{
	int real;
	int imag;
	
};

	void exchange(struct complex *p, struct complex *q);

	void main(){
		struct complex c1={2,3},c2={4,4};
		
		printf("Before exchange c1=%d+%di and c2=%d+%di\n",c1.real,c1.imag,c2.real,c2.imag);
		
		exchange(&c1,&c2);
		
		printf("\nAfter exchange c1=%d+%di and c2=%d+%di",c1.real,c1.imag,c2.real,c2.imag);
	
	}
	
	void exchange(struct complex *p, struct complex *q){
		struct complex temp;
		temp.real=p->real;
		temp.imag=p->imag;
		
		p->real=q->imag;
		p->imag=q->imag;
		
		q->real=temp.real;
		q->imag=temp.imag;
	}
	
// 	Output
//	Before exchagne c1=2+3i and c2=4+4i
// 	After exchange c1=4+4i and c2=2+3i
