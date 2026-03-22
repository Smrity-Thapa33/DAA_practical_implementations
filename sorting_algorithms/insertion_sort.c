#include<stdio.h>
int Insertion(int[],int);
int main()
{
	int n,i;
	int a[100];
	printf("Enter the number of items :\n");
	scanf("%d",&n);
	printf("Enter the data items:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Unsorted array:");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		Insertion(a,n);
		printf("\n");
		printf("Sorted array:");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		printf("\nName: Smrity Thapa\nRoll no: 52");
    	return 0;
}

int Insertion(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp= a[i];
		j=i-1;
		while(temp<a[j]&&j>=0)
		{
			
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
