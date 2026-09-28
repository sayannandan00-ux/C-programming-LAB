//1+2+4+7+11 ...upto n trams write a c program to calculate sum of the given series

#include<stdio.h>

int main(){
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	
	int term=1; 
	int sum=0;
	int i=1;
	while(i<=n){
		sum = sum + term;
		term = term +i;
		i++;
	}
	printf("%d",sum);
	return 0;
}
