/*
	Name: Sagar Giri
	Date: 
	Description: Program to solve Tower Of Hanoi with 'n' no. of Disk
*/

#include <stdio.h>
#include <math.h>
void TOH(int ,char , char , char );
main()
{
	int n;
	printf("\n\n\nenter the number of disk\n\n\n");
	scanf("%d",&n);
	system("cls");
	TOH(n,'F','A','T');
	int moves=pow(2,n)-1;
     printf("\n\nNo.of moves=%d\n\n",moves);
}

void TOH(int n,char F, char A, char T)
{
	if(n==1) {
		printf("\nmove %d Disk from %c Peg to %c Peg",n,F,T);
		return;
	}
	TOH(n-1,F,T,A);
	printf("\nmove %d Disk from %c Peg to %c Peg",n,F,T);
	TOH(n-1,A,F,T);
}
