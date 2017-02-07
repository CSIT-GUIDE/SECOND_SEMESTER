#include <stdio.h>
int sequenceSearch(int [], int , int);
main()
{
	int p;
	int key=22;
	int A[]={11,9,1,22,56,45,36};
	p=sequenceSearch(A,6,key);
	printf("the %d element is located at %d th position",key,p);
}
int sequenceSearch(int A[], int n, int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(key==A[i])
		{
			return(i+1);
		}
	}
	return(-1);
}
