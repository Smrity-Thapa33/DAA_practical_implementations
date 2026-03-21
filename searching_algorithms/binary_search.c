#include<stdio.h>
int b_search(int a[],int l,int h,int key){
	int mid;
	if(l>h){
		printf("Search failure!");
		return -1;
	}
	mid=(l+h)/2;
	if(key<a[mid])
		b_search(a,l,mid-1,key);
	else if(key>a[mid])
		b_search(a,mid+1,h,key);
	else{
		printf("\nSearch successful!");
		return mid+1;
	}
}
int main(){
	int a[100],n,i,key,l,h,loc;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	l=0;
	h=n-1;
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the search key: ");
	scanf("%d",&key);
	loc=b_search(a,l,h,key);
	printf("Key %d is at location %d",key,loc);
        
    printf("\nName: Smrity Thapa\nRoll no: 52");
	return 0;
}