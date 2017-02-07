/* 7. Program to show details of student using structure. */

#include<stdio.h>
#include<conio.h>

#define MAX 15

struct student{	
	char name[MAX];
	int roll_no;
	float mark;
};

void main()	{
	
	struct student s1,s2;	
	
	printf("Enter the Name, Roll.No and Marks for student 1\n");
	scanf("%s %d %f",s1.name,&s1.roll_no,&s1.mark); // Input: Abhishek 234 100
	
	printf("Enter the Name, Roll.No and Marks for student 2\n");
	scanf("%s %d %f",s2.name,&s2.roll_no,&s2.mark); // Input: Bibek 203 100
	
	printf("\nDetails of student 1\n");
	printf("Name=%s, Roll.No=%d, Mark=%f",s1.name,s1.roll_no,s1.mark); // Output: Name=Abhishek, Roll.No=234, Mark=100
	
	printf("\nDetails of student 2\n");
	printf("Name=%s, Roll.No=%d, Mark=%f",s2.name,s2.roll_no,s2.mark);// Output: Name=Bibek, Roll.No=203, Mark=100
	
		
}
