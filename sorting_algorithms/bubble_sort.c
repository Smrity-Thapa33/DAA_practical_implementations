#include<stdio.h>
void bubble_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<(n-i-1);j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main(){
	int n,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the %d elements of array:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The array before sorting:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	bubble_sort(a,n);
	printf("\nThe array after sorting:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
    printf("\nName: Smrity Thapa\nRoll no: 52");
	return 0;
}