#include <stdio.h>
void Quick(int [],int, int);
int partition(int [],int,int);

main()
{
	int A[]={11,45,61,33,55,9,83,25};
	int k;
	printf("\n\nTHE ARRAY BEFORE SORTING\n\n");
	for(k=0;k<8;k++)
	{
		printf("%3d",A[k]);
	}
	
	Quick(A,0,7);
	
	printf("\n\nTHE ARRAY AFTER SORTING\n\n");
	for(k=0;k<8;k++)
	{
		printf("%3d",A[k]);
	}
}

void Quick(int A[],int low, int high)
{
	int j;
	if(low>=high)
	return;
	
	j=partition(A,low,high);
	
	Quick(A,low,j-1);
	Quick(A,j+1,high);
}

int partition(int A[],int low,int high)
{
	int temp;
	int pivot=A[low];
	int i=low;
	int j=high;
	while(i<j)
	{
		while(A[i]<=pivot && i<=high)
				i++;
		while(A[j]>pivot)
				j--;
		if(i<j)
		{
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}
	A[low]=A[j];
	A[j]=pivot;
	return(j);
}
