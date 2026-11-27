/*print the smallest array*/

#include<stdio.h>
int main(){
	int i,n,min;
	printf("enter the number of the array :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		min = a[0];
		printf("enter the element :");
		scanf("%d",&a[i]);
		if(a[i]<min){
			min=a[i];
		}
		
	}
	printf("smalles=%d",min);
	return 0;
}
