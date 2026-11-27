/*write a c program to find the largest number with in an array*/

#include<stdio.h>

int main(){
	int i,n,max;
	printf("the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n;i++){
		max = a[0];
		printf("enter the elements :");
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}	
	}
	printf("largest=%d",max);
	return 0;
}
