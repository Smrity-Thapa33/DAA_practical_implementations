#include<stdio.h>
int main(){
	int a[100],n,i,key;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter search key: ");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==a[i]){
			break;
		}
	}
	if(i==n){
		printf("\nSearch failure!");
	}
	else{
		printf("Search successful and key %d is at location %d",key,i+1);
	}
    
    printf("\nName: Smrity Thapa\nRoll no: 52");
	return 0;
}