/*2+5+8+11+14...upto n trams write a c program to calculate sum of the given series*/

#include<stdio.h>

int main(){
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	int i=2;
	int sum = 0;
	while(i<=n){
		sum = sum+i;
		i+=3;
	}
	printf("the number is : %d", sum);
	return 0;
}
