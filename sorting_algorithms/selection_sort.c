#include<stdio.h>
void selection_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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
	selection_sort(a,n);
	printf("\nThe array after sorting:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
    printf("\nName: Smrity Thapa\nRoll no: 52");
	return 0;
}