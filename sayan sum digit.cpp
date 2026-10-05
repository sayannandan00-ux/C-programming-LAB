//write a c program to calculate the sum of digit

#include<stdio.h>

int main(){
	int n,a,b,sum=0;
	printf("enter the digit : ");
	scanf("%d",&n);
	
	int i;
	while(n!=0){
		a=n%10;
		sum=sum+a;
		n=n/10;		
	}
		printf("%d",sum);
	return 0;
}
