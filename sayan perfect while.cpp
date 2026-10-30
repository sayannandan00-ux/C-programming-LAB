//write a c program to check whether a number is perfect number

#include<stdio.h>

int main(){
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	
	int i=1,sum=0;
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		printf("it is a perfect number");
	}else{
		printf("it is not a perfect number");
	}
	return 0;
}
